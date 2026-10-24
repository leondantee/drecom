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

// Function: Pl_em_die_em10_catch_f
// Address: 0x13b2f0 - 0x13b3ec
void Pl_em_die_em10_catch_f_0x13b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_die_em10_catch_f_0x13b2f0");
#endif

    switch (ctx->pc) {
        case 0x13b368u: goto label_13b368;
        case 0x13b388u: goto label_13b388;
        case 0x13b394u: goto label_13b394;
        case 0x13b3a8u: goto label_13b3a8;
        case 0x13b3b4u: goto label_13b3b4;
        default: break;
    }

    ctx->pc = 0x13b2f0u;

    // 0x13b2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b2f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x13b2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x13b2f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x13b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13b2fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b300: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x13b300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x13b304: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x13b304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x13b308: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b30c: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x13b30cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x13b310: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b314: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x13b314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13b318: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13b318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b31c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b320: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x13B320u;
    {
        const bool branch_taken_0x13b320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13b320) {
            ctx->pc = 0x13B378u;
            goto label_13b378;
        }
    }
    ctx->pc = 0x13B328u;
    // 0x13b328: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B328u;
    {
        const bool branch_taken_0x13b328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b328) {
            ctx->pc = 0x13B338u;
            goto label_13b338;
        }
    }
    ctx->pc = 0x13B330u;
    // 0x13b330: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13B330u;
    {
        const bool branch_taken_0x13b330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b330) {
            ctx->pc = 0x13B3DCu;
            goto label_13b3dc;
        }
    }
    ctx->pc = 0x13B338u;
label_13b338:
    // 0x13b338: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b33c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b340: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x13b340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b344: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13b344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x13b348: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13b348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x13b34c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13b34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x13b350: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13b350u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x13b354: 0x240600aa  addiu       $a2, $zero, 0xAA
    ctx->pc = 0x13b354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x13b358: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13b358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b35c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13b35cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13b360: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13B360u;
    SET_GPR_U32(ctx, 31, 0x13B368u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13B360u, 0x13B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B368u;
label_13b368:
    // 0x13b368: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b36c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13b36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13b370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13b374: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13b374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13b378:
    // 0x13b378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b37c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b37cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b380: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13B380u;
    SET_GPR_U32(ctx, 31, 0x13B388u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13B380u, 0x13B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B388u;
label_13b388:
    // 0x13b388: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b38c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13B38Cu;
    SET_GPR_U32(ctx, 31, 0x13B394u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13B38Cu, 0x13B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B394u;
label_13b394:
    // 0x13b394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13b394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13b398: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b39c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b3a0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13B3A0u;
    SET_GPR_U32(ctx, 31, 0x13B3A8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13B3A0u, 0x13B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3A8u;
label_13b3a8:
    // 0x13b3a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13b3a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b3ac: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x13B3ACu;
    SET_GPR_U32(ctx, 31, 0x13B3B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13B3ACu, 0x13B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3B4u;
label_13b3b4:
    // 0x13b3b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b3b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13b3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x13b3bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B3BCu;
    {
        const bool branch_taken_0x13b3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b3bc) {
            ctx->pc = 0x13B3DCu;
            goto label_13b3dc;
        }
    }
    ctx->pc = 0x13B3C4u;
    // 0x13b3c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b3c8: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x13b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x13b3cc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x13b3d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13b3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13b3d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b3d8: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x13b3d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
label_13b3dc:
    // 0x13b3dc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x13b3dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b3e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13B3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B3ECu;
}
