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

// Function: entry_002fcd90
// Address: 0x2fcd90 - 0x2fcdb8
void entry_002fcd90_0x2fcd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fcd90_0x2fcd90");
#endif

    ctx->pc = 0x2fcd90u;

    // 0x2fcd90: 0x8fb70178  lw          $s7, 0x178($sp)
    ctx->pc = 0x2fcd90u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd94: 0x8ee40100  lw          $a0, 0x100($s7)
    ctx->pc = 0x2fcd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 256)));
    // 0x2fcd98: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x2fcd98u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fcd9c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2fcd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2fcda0: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x2fcda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x2fcda4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCDA4u;
    {
        const bool branch_taken_0x2fcda4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fcda4) {
            ctx->pc = 0x2FCDB8u;
            return;
        }
    }
    ctx->pc = 0x2FCDACu;
    // 0x2fcdac: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x2fcdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fcdb0: 0x34770008  ori         $s7, $v1, 0x8
    ctx->pc = 0x2fcdb0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2fcdb4: 0xae370b18  sw          $s7, 0xB18($s1)
    ctx->pc = 0x2fcdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 23));
    ctx->pc = 0x2fcdb8u;
}
