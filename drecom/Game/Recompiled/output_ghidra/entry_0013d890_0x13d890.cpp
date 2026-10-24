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

// Function: entry_0013d890
// Address: 0x13d890 - 0x13d8c4
void entry_0013d890_0x13d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d890_0x13d890");
#endif

    ctx->pc = 0x13d890u;

    // 0x13d890: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13d894: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x13d894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x13d898: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D898u;
    {
        const bool branch_taken_0x13d898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d898) {
            ctx->pc = 0x13D8C4u;
            return;
        }
    }
    ctx->pc = 0x13D8A0u;
    // 0x13d8a0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x13d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d8a4: 0xdca40030  ld          $a0, 0x30($a1)
    ctx->pc = 0x13d8a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13d8a8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x13d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13d8ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d8b0: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x13d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x13d8b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d8b8: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x13d8b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13d8bc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13d8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13d8c0: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x13d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
    ctx->pc = 0x13d8c4u;
}
