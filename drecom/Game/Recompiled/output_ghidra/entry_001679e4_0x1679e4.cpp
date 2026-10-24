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

// Function: entry_001679e4
// Address: 0x1679e4 - 0x167ab8
void entry_001679e4_0x1679e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001679e4_0x1679e4");
#endif

    switch (ctx->pc) {
        case 0x167a3cu: goto label_167a3c;
        case 0x167a4cu: goto label_167a4c;
        case 0x167a68u: goto label_167a68;
        case 0x167a7cu: goto label_167a7c;
        default: break;
    }

    ctx->pc = 0x1679e4u;

    // 0x1679e4: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x1679e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1679e8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1679e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x1679ec: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1679ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1679f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1679f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1679f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1679f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1679f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1679fc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1679fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x167a00: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x167a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x167a04: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x167a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x167a08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167a0c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x167a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x167a10: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x167a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x167a14: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x167a18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x167a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167a1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167a20: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x167a20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x167a24: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x167a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x167a28: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x167a28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x167a2c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x167a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167a30: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x167a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167a34: 0xc059eb0  jal         func_167AC0
    ctx->pc = 0x167A34u;
    SET_GPR_U32(ctx, 31, 0x167A3Cu);
    ctx->pc = 0x167AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AC0u, 0x167A34u, 0x167A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A3Cu;
label_167a3c:
    // 0x167a3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167a40: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x167a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167a44: 0xc05af54  jal         func_16BD50
    ctx->pc = 0x167A44u;
    SET_GPR_U32(ctx, 31, 0x167A4Cu);
    ctx->pc = 0x16BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD50u, 0x167A44u, 0x167A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A4Cu;
label_167a4c:
    // 0x167a4c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x167a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167a50: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x167a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x167a54: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x167a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x167a58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x167a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x167a5c: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x167a5cu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167a60: 0xc040c8c  jal         func_103230
    ctx->pc = 0x167A60u;
    SET_GPR_U32(ctx, 31, 0x167A68u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x167A68u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167A68u) { return; }
    ctx->pc = 0x167A68u;
label_167a68:
    // 0x167a68: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x167a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167a6c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x167a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167a70: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x167a74: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x167A74u;
    SET_GPR_U32(ctx, 31, 0x167A7Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x167A7Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167A7Cu) { return; }
    ctx->pc = 0x167A7Cu;
label_167a7c:
    // 0x167a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x167a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x167a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167a84: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x167a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167a88: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x167a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x167a8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x167a90: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x167a90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x167a94: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x167a94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167a98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x167a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167a9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167aac: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x167aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x167ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x167AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167AB8u;
}
