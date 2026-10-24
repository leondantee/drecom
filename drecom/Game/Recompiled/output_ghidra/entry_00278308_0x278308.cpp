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

// Function: entry_00278308
// Address: 0x278308 - 0x2783b8
void entry_00278308_0x278308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278308_0x278308");
#endif

    switch (ctx->pc) {
        case 0x278398u: goto label_278398;
        default: break;
    }

    ctx->pc = 0x278308u;

    // 0x278308: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x278308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27830c: 0x245295a0  addiu       $s2, $v0, -0x6A60
    ctx->pc = 0x27830cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x278310: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x278310u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x278314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278318: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x278318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27831c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x27831cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x278320: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x278320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x278324: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x278324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x278328: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x278328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x27832c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x278330: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x278330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x278334: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x278334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x278338: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x278338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27833c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x27833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x278340: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x278340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x278344: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278348: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x278348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27834c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x27834cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x278350: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x278350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x278354: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278358: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278358u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27835c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278360: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278360u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278364: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x278364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x278368: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x278368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x27836c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278374: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27837c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27837cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278380: 0xa022d871  sb          $v0, -0x278F($at)
    ctx->pc = 0x278380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD871u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD871u, _value); } while (0);
    // 0x278384: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x278384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x278388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27838c: 0xa022d911  sb          $v0, -0x26EF($at)
    ctx->pc = 0x27838cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x278390: 0xc084934  jal         func_2124D0
    ctx->pc = 0x278390u;
    SET_GPR_U32(ctx, 31, 0x278398u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x278390u, 0x278398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278398u;
label_278398:
    // 0x278398: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x278398u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27839c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27839cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2783a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2783a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2783a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2783a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2783a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2783a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2783ac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2783acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2783b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2783B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2783B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2783B8u;
}
