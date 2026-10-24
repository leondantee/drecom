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

// Function: entry_0016ab80
// Address: 0x16ab80 - 0x16ac24
void entry_0016ab80_0x16ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab80_0x16ab80");
#endif

    switch (ctx->pc) {
        case 0x16abd8u: goto label_16abd8;
        case 0x16abf4u: goto label_16abf4;
        case 0x16ac08u: goto label_16ac08;
        default: break;
    }

    ctx->pc = 0x16ab80u;

    // 0x16ab80: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x16ab84: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x16ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x16ab88: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ab8c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ab90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab94: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16ab94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16ab98: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x16ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x16ab9c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16aba0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16aba4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aba8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16aba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16abac: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x16abacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x16abb0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16abb4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16abb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16abbc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16abbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16abc0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x16abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x16abc4: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x16abc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x16abc8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16abc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16abcc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x16abccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16abd0: 0xc05ab14  jal         func_16AC50
    ctx->pc = 0x16ABD0u;
    SET_GPR_U32(ctx, 31, 0x16ABD8u);
    ctx->pc = 0x16AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AC50u, 0x16ABD0u, 0x16ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABD8u;
label_16abd8:
    // 0x16abd8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x16abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16abdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16abe0: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x16abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16abe4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16abe8: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x16abe8u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16abec: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16ABECu;
    SET_GPR_U32(ctx, 31, 0x16ABF4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16ABF4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16ABF4u) { return; }
    ctx->pc = 0x16ABF4u;
label_16abf4:
    // 0x16abf4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x16abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16abf8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x16abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16abfc: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16ac00: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16AC00u;
    SET_GPR_U32(ctx, 31, 0x16AC08u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16AC08u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16AC08u) { return; }
    ctx->pc = 0x16AC08u;
label_16ac08:
    // 0x16ac08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16ac0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ac0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ac10: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16ac14: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x16ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x16ac18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16ac18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16ac1c: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x16ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x16ac20: 0x0  nop
    ctx->pc = 0x16ac20u;
    // NOP
    ctx->pc = 0x16ac24u;
}
