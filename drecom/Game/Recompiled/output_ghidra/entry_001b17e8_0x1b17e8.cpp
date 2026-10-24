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

// Function: entry_001b17e8
// Address: 0x1b17e8 - 0x1b1858
void entry_001b17e8_0x1b17e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b17e8_0x1b17e8");
#endif

    ctx->pc = 0x1b17e8u;

    // 0x1b17e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b17e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b17ec: 0x9463130c  lhu         $v1, 0x130C($v1)
    ctx->pc = 0x1b17ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4876)));
    // 0x1b17f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b17f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b17f4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1b17f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b17f8: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1B17F8u;
    {
        const bool branch_taken_0x1b17f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b17f8) {
            ctx->pc = 0x1B1674u;
            return;
        }
    }
    ctx->pc = 0x1B1800u;
    // 0x1b1800: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b1800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1804: 0x84830098  lh          $v1, 0x98($a0)
    ctx->pc = 0x1b1804u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1b1808: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b1808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b180c: 0xa4830098  sh          $v1, 0x98($a0)
    ctx->pc = 0x1b180cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b1810: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1814: 0x84630098  lh          $v1, 0x98($v1)
    ctx->pc = 0x1b1814u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x1b1818: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1b1818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b181c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1b181cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1b1820: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1824: 0x9463130a  lhu         $v1, 0x130A($v1)
    ctx->pc = 0x1b1824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4874)));
    // 0x1b1828: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b182c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b182cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b1830: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1830u;
    {
        const bool branch_taken_0x1b1830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1830) {
            ctx->pc = 0x1B1858u;
            return;
        }
    }
    ctx->pc = 0x1B1838u;
    // 0x1b1838: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b183c: 0x9463130a  lhu         $v1, 0x130A($v1)
    ctx->pc = 0x1b183cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4874)));
    // 0x1b1840: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1844: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b1848: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1b1848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b184c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1b184cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1b1850: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1b1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1854: 0xa4640098  sh          $a0, 0x98($v1)
    ctx->pc = 0x1b1854u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 152), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1b1858u;
}
