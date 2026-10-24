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

// Function: entry_001df3f0
// Address: 0x1df3f0 - 0x1df448
void entry_001df3f0_0x1df3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df3f0_0x1df3f0");
#endif

    ctx->pc = 0x1df3f0u;

label_1df3f0:
    // 0x1df3f0: 0xae920064  sw          $s2, 0x64($s4)
    ctx->pc = 0x1df3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 18));
    // 0x1df3f4: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x1df3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1df3f8: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1df3f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1df3fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df3fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df400: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF400u;
    {
        const bool branch_taken_0x1df400 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df400) {
            ctx->pc = 0x1DF3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df3f0;
        }
    }
    ctx->pc = 0x1DF408u;
    // 0x1df408: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x1df408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df40c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1df40cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df410: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df414: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df418: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df41c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df420: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df424: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df428: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df42c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df430: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df434: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df438: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df43c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df440: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df444: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1df444u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x1df448u;
}
