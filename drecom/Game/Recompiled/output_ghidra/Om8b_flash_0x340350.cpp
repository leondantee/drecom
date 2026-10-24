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

// Function: Om8b_flash
// Address: 0x340350 - 0x340424
void Om8b_flash_0x340350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_flash_0x340350");
#endif

    switch (ctx->pc) {
        case 0x340388u: goto label_340388;
        case 0x340398u: goto label_340398;
        case 0x3403b0u: goto label_3403b0;
        case 0x3403f0u: goto label_3403f0;
        case 0x340414u: goto label_340414;
        default: break;
    }

    ctx->pc = 0x340350u;

    // 0x340350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340354: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x340354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x340358: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x340358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x34035c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x34035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340360: 0x8c43128c  lw          $v1, 0x128C($v0)
    ctx->pc = 0x340360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x340364: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x340364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340368: 0xac431290  sw          $v1, 0x1290($v0)
    ctx->pc = 0x340368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 3));
    // 0x34036c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x340370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x340370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340374: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x340374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x340378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x340378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34037c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340380: 0xc0cfe50  jal         func_33F940
    ctx->pc = 0x340380u;
    SET_GPR_U32(ctx, 31, 0x340388u);
    ctx->pc = 0x33F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F940u, 0x340380u, 0x340388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340388u;
label_340388:
    // 0x340388: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x340388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34038c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34038cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340390: 0xc0cfe58  jal         func_33F960
    ctx->pc = 0x340390u;
    SET_GPR_U32(ctx, 31, 0x340398u);
    ctx->pc = 0x33F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F960u, 0x340390u, 0x340398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340398u;
label_340398:
    // 0x340398: 0x24040421  addiu       $a0, $zero, 0x421
    ctx->pc = 0x340398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x34039c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3403a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3403a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3403a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3403a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3403a8: 0xc067c24  jal         func_19F090
    ctx->pc = 0x3403A8u;
    SET_GPR_U32(ctx, 31, 0x3403B0u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x3403A8u, 0x3403B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3403B0u;
label_3403b0:
    // 0x3403b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3403b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3403b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3403b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3403b8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3403b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3403bc: 0x3c0342d2  lui         $v1, 0x42D2
    ctx->pc = 0x3403bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17106 << 16));
    // 0x3403c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3403c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3403c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3403c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3403c8: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x3403c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x3403cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3403ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3403d0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3403d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3403d4: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x3403d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x3403d8: 0x240700dc  addiu       $a3, $zero, 0xDC
    ctx->pc = 0x3403d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x3403dc: 0x240800dc  addiu       $t0, $zero, 0xDC
    ctx->pc = 0x3403dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x3403e0: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3403e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3403e4: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x3403e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3403e8: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3403E8u;
    SET_GPR_U32(ctx, 31, 0x3403F0u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3403E8u, 0x3403F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3403F0u;
label_3403f0:
    // 0x3403f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3403f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3403f4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3403f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3403f8: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x3403f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x3403fc: 0x240700dc  addiu       $a3, $zero, 0xDC
    ctx->pc = 0x3403fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x340400: 0x240800dc  addiu       $t0, $zero, 0xDC
    ctx->pc = 0x340400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x340404: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x340404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340408: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x340408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34040c: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x34040Cu;
    SET_GPR_U32(ctx, 31, 0x340414u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x34040Cu, 0x340414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340414u;
label_340414:
    // 0x340414: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x340414u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340418: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x340418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34041c: 0x3e00008  jr          $ra
    ctx->pc = 0x34041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34041Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340424u;
}
