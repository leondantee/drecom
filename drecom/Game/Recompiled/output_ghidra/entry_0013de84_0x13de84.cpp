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

// Function: entry_0013de84
// Address: 0x13de84 - 0x13dee0
void entry_0013de84_0x13de84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013de84_0x13de84");
#endif

    ctx->pc = 0x13de84u;

    // 0x13de84: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x13de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x13de88: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x13de88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x13de8c: 0x8e9000b0  lw          $s0, 0xB0($s4)
    ctx->pc = 0x13de8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x13de90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x13de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13de94: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x13de94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
    // 0x13de98: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x13de98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13de9c: 0x8e930020  lw          $s3, 0x20($s4)
    ctx->pc = 0x13de9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13dea0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13dea4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13dea8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x13dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x13deac: 0xafb10078  sw          $s1, 0x78($sp)
    ctx->pc = 0x13deacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 17));
    // 0x13deb0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x13deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13deb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13deb8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13debc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13debcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13dec0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x13dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13dec4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13dec8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13decc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13ded0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13ded4: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x13ded4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13ded8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x13ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13dedc: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x13dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x13dee0u;
}
