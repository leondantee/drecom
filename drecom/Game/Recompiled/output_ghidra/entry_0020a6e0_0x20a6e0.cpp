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

// Function: entry_0020a6e0
// Address: 0x20a6e0 - 0x20a748
void entry_0020a6e0_0x20a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a6e0_0x20a6e0");
#endif

    ctx->pc = 0x20a6e0u;

    // 0x20a6e0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x20a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a6e4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x20a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a6e8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a6ec: 0x248393e0  addiu       $v1, $a0, -0x6C20
    ctx->pc = 0x20a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939616));
    // 0x20a6f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20a6f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a6f8: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x20A6F8u;
    {
        const bool branch_taken_0x20a6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6f8) {
            ctx->pc = 0x20A8A8u;
            return;
        }
    }
    ctx->pc = 0x20A700u;
    // 0x20a700: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x20a700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a704: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x20a704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20a708: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a70c: 0x248393e0  addiu       $v1, $a0, -0x6C20
    ctx->pc = 0x20a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939616));
    // 0x20a710: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x20a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20a714: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x20a714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20a718: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a71c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20A71Cu;
    {
        const bool branch_taken_0x20a71c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a71c) {
            ctx->pc = 0x20A748u;
            return;
        }
    }
    ctx->pc = 0x20A724u;
    // 0x20a724: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x20a724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x20a728: 0x2464dce0  addiu       $a0, $v1, -0x2320
    ctx->pc = 0x20a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x20a72c: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x20a72cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3EDCE0u));
    // 0x20a730: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x20a730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a734: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x20a734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20a738: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a73c: 0x24839390  addiu       $v1, $a0, -0x6C70
    ctx->pc = 0x20a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939536));
    // 0x20a740: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x20a740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a744: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x20a744u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    ctx->pc = 0x20a748u;
}
