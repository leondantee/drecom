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

// Function: entry_00145710
// Address: 0x145710 - 0x1457a8
void entry_00145710_0x145710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145710_0x145710");
#endif

    switch (ctx->pc) {
        case 0x145734u: goto label_145734;
        case 0x145760u: goto label_145760;
        case 0x145784u: goto label_145784;
        case 0x1457a0u: goto label_1457a0;
        default: break;
    }

    ctx->pc = 0x145710u;

    // 0x145710: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145714: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145718: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x145718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14571c: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x14571cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x145720: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x145720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x145724: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x145724u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x145728: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x145728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14572c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14572Cu;
    SET_GPR_U32(ctx, 31, 0x145734u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14572Cu, 0x145734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145734u;
label_145734:
    // 0x145734: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145738: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14573c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x145740: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145744: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x145744u;
    {
        const bool branch_taken_0x145744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145744) {
            ctx->pc = 0x1457A8u;
            return;
        }
    }
    ctx->pc = 0x14574Cu;
    // 0x14574c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145750: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145754: 0xc44c1b34  lwc1        $f12, 0x1B34($v0)
    ctx->pc = 0x145754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145758: 0xc067844  jal         func_19E110
    ctx->pc = 0x145758u;
    SET_GPR_U32(ctx, 31, 0x145760u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x145758u, 0x145760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145760u;
label_145760:
    // 0x145760: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145764: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x145764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145768: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14576c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145770: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x145770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x145774: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x145774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x145778: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14577c: 0xc040c00  jal         func_103000
    ctx->pc = 0x14577Cu;
    SET_GPR_U32(ctx, 31, 0x145784u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x145784u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x145784u) { return; }
    ctx->pc = 0x145784u;
label_145784:
    // 0x145784: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145788: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x145788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14578c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145790: 0xc4401b34  lwc1        $f0, 0x1B34($v0)
    ctx->pc = 0x145790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145794: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x145794u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x145798: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x145798u;
    SET_GPR_U32(ctx, 31, 0x1457A0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x145798u, 0x1457A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457A0u;
label_1457a0:
    // 0x1457a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1457a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1457a8u;
}
