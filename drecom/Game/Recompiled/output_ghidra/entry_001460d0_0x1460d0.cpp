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

// Function: entry_001460d0
// Address: 0x1460d0 - 0x14616c
void entry_001460d0_0x1460d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001460d0_0x1460d0");
#endif

    switch (ctx->pc) {
        case 0x1460f8u: goto label_1460f8;
        case 0x146124u: goto label_146124;
        case 0x146148u: goto label_146148;
        case 0x146164u: goto label_146164;
        default: break;
    }

    ctx->pc = 0x1460d0u;

    // 0x1460d0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1460d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1460d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1460d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1460d8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1460d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1460dc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1460dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1460e0: 0x34460002  ori         $a2, $v0, 0x2
    ctx->pc = 0x1460e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1460e4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1460e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1460e8: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1460e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1460ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1460ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1460f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1460F0u;
    SET_GPR_U32(ctx, 31, 0x1460F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1460F0u, 0x1460F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460F8u;
label_1460f8:
    // 0x1460f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1460f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1460fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1460fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146100: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x146104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146108: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x146108u;
    {
        const bool branch_taken_0x146108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146108) {
            ctx->pc = 0x14616Cu;
            return;
        }
    }
    ctx->pc = 0x146110u;
    // 0x146110: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146114: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x146114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146118: 0xc44c1b34  lwc1        $f12, 0x1B34($v0)
    ctx->pc = 0x146118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14611c: 0xc067844  jal         func_19E110
    ctx->pc = 0x14611Cu;
    SET_GPR_U32(ctx, 31, 0x146124u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x14611Cu, 0x146124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146124u;
label_146124:
    // 0x146124: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146128: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x146128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14612c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146130: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x146130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x146134: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x146134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x146138: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x146138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x14613c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146140: 0xc040c00  jal         func_103000
    ctx->pc = 0x146140u;
    SET_GPR_U32(ctx, 31, 0x146148u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x146148u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x146148u) { return; }
    ctx->pc = 0x146148u;
label_146148:
    // 0x146148: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14614c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146150: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146154: 0xc4401b34  lwc1        $f0, 0x1B34($v0)
    ctx->pc = 0x146154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146158: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x146158u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14615c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14615Cu;
    SET_GPR_U32(ctx, 31, 0x146164u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14615Cu, 0x146164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146164u;
label_146164:
    // 0x146164: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146168: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x146168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x14616cu;
}
