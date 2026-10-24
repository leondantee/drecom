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

// Function: entry_00145be0
// Address: 0x145be0 - 0x145c7c
void entry_00145be0_0x145be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145be0_0x145be0");
#endif

    switch (ctx->pc) {
        case 0x145c08u: goto label_145c08;
        case 0x145c34u: goto label_145c34;
        case 0x145c58u: goto label_145c58;
        case 0x145c74u: goto label_145c74;
        default: break;
    }

    ctx->pc = 0x145be0u;

    // 0x145be0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145be4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145be8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x145be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x145bec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x145becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x145bf0: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x145bf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x145bf4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x145bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x145bf8: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x145bf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x145bfc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x145bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x145c00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x145C00u;
    SET_GPR_U32(ctx, 31, 0x145C08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x145C00u, 0x145C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C08u;
label_145c08:
    // 0x145c08: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145c10: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x145c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x145c14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145c18: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x145C18u;
    {
        const bool branch_taken_0x145c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145c18) {
            ctx->pc = 0x145C7Cu;
            return;
        }
    }
    ctx->pc = 0x145C20u;
    // 0x145c20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145c28: 0xc44c1b34  lwc1        $f12, 0x1B34($v0)
    ctx->pc = 0x145c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145c2c: 0xc067844  jal         func_19E110
    ctx->pc = 0x145C2Cu;
    SET_GPR_U32(ctx, 31, 0x145C34u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x145C2Cu, 0x145C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C34u;
label_145c34:
    // 0x145c34: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c38: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x145c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145c3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c40: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x145c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145c44: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x145c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x145c48: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x145c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x145c4c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145c50: 0xc040c00  jal         func_103000
    ctx->pc = 0x145C50u;
    SET_GPR_U32(ctx, 31, 0x145C58u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x145C58u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x145C58u) { return; }
    ctx->pc = 0x145C58u;
label_145c58:
    // 0x145c58: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c5c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x145c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145c60: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c64: 0xc4401b34  lwc1        $f0, 0x1B34($v0)
    ctx->pc = 0x145c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c68: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x145c68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x145c6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x145C6Cu;
    SET_GPR_U32(ctx, 31, 0x145C74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x145C6Cu, 0x145C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C74u;
label_145c74:
    // 0x145c74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c78: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x145c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x145c7cu;
}
