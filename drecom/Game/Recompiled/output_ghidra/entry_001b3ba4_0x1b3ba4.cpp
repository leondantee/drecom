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

// Function: entry_001b3ba4
// Address: 0x1b3ba4 - 0x1b3be0
void entry_001b3ba4_0x1b3ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ba4_0x1b3ba4");
#endif

    switch (ctx->pc) {
        case 0x1b3bc0u: goto label_1b3bc0;
        default: break;
    }

    ctx->pc = 0x1b3ba4u;

    // 0x1b3ba4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1b3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3ba8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3bac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b3bb0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3bb4: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1b3bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b3bb8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B3BB8u;
    SET_GPR_U32(ctx, 31, 0x1B3BC0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B3BC0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B3BC0u) { return; }
    ctx->pc = 0x1B3BC0u;
label_1b3bc0:
    // 0x1b3bc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b3bc4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1b3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x1b3bc8: 0x8e021228  lw          $v0, 0x1228($s0)
    ctx->pc = 0x1b3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4648)));
    // 0x1b3bcc: 0x2451ffe0  addiu       $s1, $v0, -0x20
    ctx->pc = 0x1b3bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b3bd0: 0x8e17121c  lw          $s7, 0x121C($s0)
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x1b3bd4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b3bd4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3bd8: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1B3BD8u;
    {
        const bool branch_taken_0x1b3bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bd8) {
            ctx->pc = 0x1B4058u;
            return;
        }
    }
    ctx->pc = 0x1B3BE0u;
}
