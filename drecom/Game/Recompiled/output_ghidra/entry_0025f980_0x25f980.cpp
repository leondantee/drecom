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

// Function: entry_0025f980
// Address: 0x25f980 - 0x25f9b8
void entry_0025f980_0x25f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f980_0x25f980");
#endif

    switch (ctx->pc) {
        case 0x25f9b4u: goto label_25f9b4;
        default: break;
    }

    ctx->pc = 0x25f980u;

    // 0x25f980: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f984: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f988: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f98c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f990: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f994: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x25f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x25f998: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25f998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f99c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25f9a0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x25f9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f9a4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25f9a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f9a8: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x25f9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25f9ac: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F9ACu;
    SET_GPR_U32(ctx, 31, 0x25F9B4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F9B4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F9B4u) { return; }
    ctx->pc = 0x25F9B4u;
label_25f9b4:
    // 0x25f9b4: 0x0  nop
    ctx->pc = 0x25f9b4u;
    // NOP
    ctx->pc = 0x25f9b8u;
}
