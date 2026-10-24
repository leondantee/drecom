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

// Function: Oba_set_pos
// Address: 0x1893e0 - 0x18953c
void Oba_set_pos_0x1893e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oba_set_pos_0x1893e0");
#endif

    switch (ctx->pc) {
        case 0x18941cu: goto label_18941c;
        case 0x18942cu: goto label_18942c;
        case 0x189478u: goto label_189478;
        case 0x1894c4u: goto label_1894c4;
        case 0x1894ecu: goto label_1894ec;
        case 0x189508u: goto label_189508;
        default: break;
    }

    ctx->pc = 0x1893e0u;

    // 0x1893e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1893e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1893e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1893e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1893e8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1893e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1893ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1893ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1893f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1893f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1893f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1893f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1893f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1893f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1893fc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x189400: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x189400u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x189404: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x189404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189408: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x189408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18940c: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x18940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x189410: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x189410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189414: 0xc040ca2  jal         func_103288
    ctx->pc = 0x189414u;
    SET_GPR_U32(ctx, 31, 0x18941Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x18941Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18941Cu) { return; }
    ctx->pc = 0x18941Cu;
label_18941c:
    // 0x18941c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189420: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x189420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189424: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x189424u;
    SET_GPR_U32(ctx, 31, 0x18942Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x18942Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18942Cu) { return; }
    ctx->pc = 0x18942Cu;
label_18942c:
    // 0x18942c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189430: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x189430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x189434: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x189434u;
    {
        const bool branch_taken_0x189434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189434) {
            ctx->pc = 0x18948Cu;
            goto label_18948c;
        }
    }
    ctx->pc = 0x18943Cu;
    // 0x18943c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189440: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x189440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x189444: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x189444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x189448: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x189448u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18944c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189450: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x189450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x189454: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x189454u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x189458: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x189458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18945c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x18945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x189460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189464: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x189464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x189468: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x189468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18946c: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x18946cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189470: 0xc040c00  jal         func_103000
    ctx->pc = 0x189470u;
    SET_GPR_U32(ctx, 31, 0x189478u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x189478u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189478u) { return; }
    ctx->pc = 0x189478u;
label_189478:
    // 0x189478: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x189478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18947c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x18947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x189480: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x189480u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x189484: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x189484u;
    {
        const bool branch_taken_0x189484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189484) {
            ctx->pc = 0x1894D0u;
            goto label_1894d0;
        }
    }
    ctx->pc = 0x18948Cu;
label_18948c:
    // 0x18948c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189490: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x189490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189494: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x189494u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189498: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x189498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18949c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1894a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1894a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1894a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1894a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1894a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894b0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1894b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1894b4: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x1894b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1894b8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1894b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1894bc: 0xc040d62  jal         func_103588
    ctx->pc = 0x1894BCu;
    SET_GPR_U32(ctx, 31, 0x1894C4u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1894C4u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1894C4u) { return; }
    ctx->pc = 0x1894C4u;
label_1894c4:
    // 0x1894c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1894c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894c8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1894c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1894cc: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1894ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_1894d0:
    // 0x1894d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1894d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1894d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1894dc: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x1894dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1894e0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1894e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1894e4: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x1894E4u;
    SET_GPR_U32(ctx, 31, 0x1894ECu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x1894E4u, 0x1894ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894ECu;
label_1894ec:
    // 0x1894ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894f4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1894f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1894f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1894f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1894fc: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1894fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x189500: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x189500u;
    SET_GPR_U32(ctx, 31, 0x189508u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x189508u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189508u) { return; }
    ctx->pc = 0x189508u;
label_189508:
    // 0x189508: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x189508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18950c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18950cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x189510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189514: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x189514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x189518: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x189518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18951c: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x189520: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x189520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x189524: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x189524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x189528: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x189528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x18952c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x18952cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189530: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189534: 0x3e00008  jr          $ra
    ctx->pc = 0x189534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18953Cu;
}
