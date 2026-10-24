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

// Function: entry_0017e544
// Address: 0x17e544 - 0x17e5b0
void entry_0017e544_0x17e544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e544_0x17e544");
#endif

    ctx->pc = 0x17e544u;

    // 0x17e544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e548: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x17e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x17e54c: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17E54Cu;
    {
        const bool branch_taken_0x17e54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e54c) {
            ctx->pc = 0x17E628u;
            return;
        }
    }
    ctx->pc = 0x17E554u;
    // 0x17e554: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e558: 0x8ca60090  lw          $a2, 0x90($a1)
    ctx->pc = 0x17e558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x17e55c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17e560: 0xaca20090  sw          $v0, 0x90($a1)
    ctx->pc = 0x17e560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 2));
    // 0x17e564: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e568: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x17e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17e56c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e570: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x17e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x17e574: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17E574u;
    {
        const bool branch_taken_0x17e574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e574) {
            ctx->pc = 0x17E5B0u;
            return;
        }
    }
    ctx->pc = 0x17E57Cu;
    // 0x17e57c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e580: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x17e580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x17e584: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e588: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x17e588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x17e58c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e590: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x17e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17e594: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e594u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e59c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e5a0: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17e5a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17e5a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17E5A8u;
    {
        const bool branch_taken_0x17e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e5a8) {
            ctx->pc = 0x17E624u;
            return;
        }
    }
    ctx->pc = 0x17E5B0u;
}
