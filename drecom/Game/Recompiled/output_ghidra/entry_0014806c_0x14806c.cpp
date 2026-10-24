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

// Function: entry_0014806c
// Address: 0x14806c - 0x1480e4
void entry_0014806c_0x14806c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014806c_0x14806c");
#endif

    ctx->pc = 0x14806cu;

    // 0x14806c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x14806cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148070: 0x90c709e7  lbu         $a3, 0x9E7($a2)
    ctx->pc = 0x148070u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x148074: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x148074u;
    {
        const bool branch_taken_0x148074 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x148074) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x14807Cu;
    // 0x14807c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148080: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148084: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x148084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x148088: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14808c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14808cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x148090: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x148090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148094: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x148094u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x148098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14809c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14809cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1480a0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1480a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1480a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1480a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1480a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1480a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1480ac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1480acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1480b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1480b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1480b4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1480b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1480b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1480b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1480bc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1480bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1480c0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1480c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1480c4: 0xc4a11b5c  lwc1        $f1, 0x1B5C($a1)
    ctx->pc = 0x1480c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1480c8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1480c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1480cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1480ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1480d0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1480d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1480d4: 0xe4c01b30  swc1        $f0, 0x1B30($a2)
    ctx->pc = 0x1480d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 6960), bits); }
    // 0x1480d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1480d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1480dc: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1480dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1480e0: 0xa10710a8  sb          $a3, 0x10A8($t0)
    ctx->pc = 0x1480e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4264), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x1480e4u;
}
