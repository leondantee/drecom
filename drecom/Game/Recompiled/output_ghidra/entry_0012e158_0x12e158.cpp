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

// Function: entry_0012e158
// Address: 0x12e158 - 0x12e1a4
void entry_0012e158_0x12e158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e158_0x12e158");
#endif

    ctx->pc = 0x12e158u;

    // 0x12e158: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e15c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x12e15cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12e160: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12E160u;
    {
        const bool branch_taken_0x12e160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e160) {
            ctx->pc = 0x12E1A4u;
            return;
        }
    }
    ctx->pc = 0x12E168u;
    // 0x12e168: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e16c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e170: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12e170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e178: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e17c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x12e17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x12e180: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e184: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12e184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e188: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e18c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12e18cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e190: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12e190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e194: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12e194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12e198: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12e198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e19c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12E19Cu;
    {
        const bool branch_taken_0x12e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e19c) {
            ctx->pc = 0x12E1A4u;
            return;
        }
    }
    ctx->pc = 0x12E1A4u;
}
