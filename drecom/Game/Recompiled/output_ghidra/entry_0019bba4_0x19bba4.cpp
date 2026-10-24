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

// Function: entry_0019bba4
// Address: 0x19bba4 - 0x19bbe8
void entry_0019bba4_0x19bba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bba4_0x19bba4");
#endif

    ctx->pc = 0x19bba4u;

    // 0x19bba4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bba8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19bbac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bbb0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19bbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bbb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bbb8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x19bbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x19bbbc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x19bbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19bbc0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19bbc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19bbc4: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x19bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x19bbc8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19BBC8u;
    {
        const bool branch_taken_0x19bbc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bbc8) {
            ctx->pc = 0x19BBFCu;
            return;
        }
    }
    ctx->pc = 0x19BBD0u;
    // 0x19bbd0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bbd4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19bbd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19bbd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bbdc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19bbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19bbe0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BBE0u;
    {
        const bool branch_taken_0x19bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bbe0) {
            ctx->pc = 0x19BBFCu;
            return;
        }
    }
    ctx->pc = 0x19BBE8u;
}
