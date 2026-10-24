#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00267e40
// Address: 0x267e40 - 0x267f28
void entry_00267e40_0x267e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267e40_0x267e40");
#endif

    switch (ctx->pc) {
        case 0x267ea4u: goto label_267ea4;
        default: break;
    }

    ctx->pc = 0x267e40u;

    // 0x267e40: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x267e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267e44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x267e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267e48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x267e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x267e4c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x267E4Cu;
    {
        const bool branch_taken_0x267e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267e4c) {
            ctx->pc = 0x267F28u;
            return;
        }
    }
    ctx->pc = 0x267E54u;
    // 0x267e54: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x267e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x267e58: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x267e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x267e5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x267e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x267e60: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x267e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x267e64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x267e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x267e68: 0xa22210a8  sb          $v0, 0x10A8($s1)
    ctx->pc = 0x267e68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x267e6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267e70: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x267e70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x267e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x267e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x267e78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x267e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x267e7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267e80: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x267e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x267e84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267e88: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x267e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x267e8c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x267e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x267e90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x267e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x267e94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267e98: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x267e98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x267e9c: 0xc09a904  jal         func_26A410
    ctx->pc = 0x267E9Cu;
    SET_GPR_U32(ctx, 31, 0x267EA4u);
    ctx->pc = 0x26A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A410u, 0x267E9Cu, 0x267EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EA4u;
label_267ea4:
    // 0x267ea4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267ea8: 0x94230092  lhu         $v1, 0x92($at)
    ctx->pc = 0x267ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0092u));
    // 0x267eac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x267eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x267eb0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x267eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x267eb4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x267EB4u;
    {
        const bool branch_taken_0x267eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267eb4) {
            ctx->pc = 0x267F28u;
            return;
        }
    }
    ctx->pc = 0x267EBCu;
    // 0x267ebc: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x267ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267ec0: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x267ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x267ec4: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x267ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x267ec8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x267ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x267ecc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x267eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x267ed0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x267ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x267ed4: 0xa22010a8  sb          $zero, 0x10A8($s1)
    ctx->pc = 0x267ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x267ed8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267edc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x267edcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x267ee0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x267ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x267ee4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x267ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x267ee8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267eec: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x267eecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x267ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267ef4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x267ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x267ef8: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x267ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x267efc: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x267efcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x267f00: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x267f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x267f04: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x267f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x267f08: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x267f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x267f0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267f10: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x267f10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x267f14: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x267f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x267f18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x267f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x267f1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x267f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x267f20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267f24: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x267f24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    ctx->pc = 0x267f28u;
}
