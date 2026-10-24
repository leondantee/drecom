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

// Function: entry_001b01d4
// Address: 0x1b01d4 - 0x1b025c
void entry_001b01d4_0x1b01d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b01d4_0x1b01d4");
#endif

    ctx->pc = 0x1b01d4u;

label_1b01d4:
    // 0x1b01d4: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b01d8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b01dc: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b01e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b01e4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b01e8: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b01ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b01f0: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1b01f4: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b01f8: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1b01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1b01fc: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1b01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1b0200: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b0200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b0204: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b0204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b0208: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b0208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b020c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b020cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0210: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0214: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b0214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1b0218: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b0218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b021c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1b021cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b0220: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0224: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1b0224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b0228: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b022c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0230: 0xafa404a8  sw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b0230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 4));
    // 0x1b0234: 0x97a304be  lhu         $v1, 0x4BE($sp)
    ctx->pc = 0x1b0234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1214)));
    // 0x1b0238: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b0238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b023c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b023cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0240: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1B0240u;
    {
        const bool branch_taken_0x1b0240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0240) {
            ctx->pc = 0x1B01D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01d4;
        }
    }
    ctx->pc = 0x1B0248u;
    // 0x1b0248: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b0248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1b024c: 0xafa304b4  sw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 3));
    // 0x1b0250: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1b0250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    // 0x1b0254: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B0254u;
    {
        const bool branch_taken_0x1b0254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0254) {
            ctx->pc = 0x1B0348u;
            return;
        }
    }
    ctx->pc = 0x1B025Cu;
}
