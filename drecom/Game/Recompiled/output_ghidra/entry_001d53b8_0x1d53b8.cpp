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

// Function: entry_001d53b8
// Address: 0x1d53b8 - 0x1d5498
void entry_001d53b8_0x1d53b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d53b8_0x1d53b8");
#endif

    ctx->pc = 0x1d53b8u;

    // 0x1d53b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d53bc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D53BCu;
    {
        const bool branch_taken_0x1d53bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53bc) {
            ctx->pc = 0x1D5498u;
            return;
        }
    }
    ctx->pc = 0x1D53C4u;
    // 0x1d53c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d53c8: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x1d53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x1d53cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d53d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d53d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d53d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d53d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d53d8: 0x3052007f  andi        $s2, $v0, 0x7F
    ctx->pc = 0x1d53d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d53dc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d53e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d53e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d53e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d53ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d53ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d53f0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d53f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d53f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d53fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5400: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x1d5400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x1d5404: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d5404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d5408: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d540c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5410: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5414: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1d5414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1d5418: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x1d5418u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1d541c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d541cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5420: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5428: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d542c: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x1d542cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x1d5430: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d5434: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d5438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d543c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5440: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d5444: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5448: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x1d5448u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d544c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d544cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5450: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5454: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5458: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d545c: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x1d545cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x1d5460: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d5460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d5464: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d5468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d546c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5470: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1d5470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1d5474: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5478: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1d547c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d547cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5480: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5484: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5488: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d548c: 0xac43009c  sw          $v1, 0x9C($v0)
    ctx->pc = 0x1d548cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 3));
    // 0x1d5490: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1D5490u;
    {
        const bool branch_taken_0x1d5490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5490) {
            ctx->pc = 0x1D5530u;
            return;
        }
    }
    ctx->pc = 0x1D5498u;
}
