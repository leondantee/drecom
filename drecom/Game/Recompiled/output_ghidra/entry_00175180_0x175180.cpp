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

// Function: entry_00175180
// Address: 0x175180 - 0x1751f8
void entry_00175180_0x175180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175180_0x175180");
#endif

    switch (ctx->pc) {
        case 0x1751c0u: goto label_1751c0;
        case 0x1751d4u: goto label_1751d4;
        default: break;
    }

    ctx->pc = 0x175180u;

    // 0x175180: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x175180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x175184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175188: 0x9442003a  lhu         $v0, 0x3A($v0)
    ctx->pc = 0x175188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x17518c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17518cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175190: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x175190u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x175194: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x175194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x175198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17519c: 0x9442003c  lhu         $v0, 0x3C($v0)
    ctx->pc = 0x17519cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1751a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1751a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1751a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1751a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1751a8: 0x34480100  ori         $t0, $v0, 0x100
    ctx->pc = 0x1751a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1751ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1751acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751b0: 0x8ca50364  lw          $a1, 0x364($a1)
    ctx->pc = 0x1751b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x1751b4: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x1751b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1751b8: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x1751B8u;
    SET_GPR_U32(ctx, 31, 0x1751C0u);
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x1751B8u, 0x1751C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751C0u;
label_1751c0:
    // 0x1751c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1751c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1751c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751c8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1751c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1751cc: 0xc096c60  jal         func_25B180
    ctx->pc = 0x1751CCu;
    SET_GPR_U32(ctx, 31, 0x1751D4u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x1751CCu, 0x1751D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751D4u;
label_1751d4:
    // 0x1751d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1751d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1751d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1751d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1751dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1751e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1751e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1751e4: 0xac20bcf8  sw          $zero, -0x4308($at)
    ctx->pc = 0x1751e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BCF8u, _value); } while (0);
    // 0x1751e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1751e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1751ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1751f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1751f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1751f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1751f8u;
}
