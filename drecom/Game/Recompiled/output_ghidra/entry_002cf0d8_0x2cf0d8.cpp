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

// Function: entry_002cf0d8
// Address: 0x2cf0d8 - 0x2cf1d4
void entry_002cf0d8_0x2cf0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf0d8_0x2cf0d8");
#endif

    ctx->pc = 0x2cf0d8u;

    // 0x2cf0d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf0dc: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf0e0: 0x10b040  sll         $s6, $s0, 1
    ctx->pc = 0x2cf0e0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf0e4: 0x2d03821  addu        $a3, $s6, $s0
    ctx->pc = 0x2cf0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2cf0e8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2cf0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2cf0ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf0f0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2cf0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cf0f4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2cf0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf0f8: 0x31031fff  andi        $v1, $t0, 0x1FFF
    ctx->pc = 0x2cf0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8191);
    // 0x2cf0fc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2cf0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2cf100: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf104: 0x2485134c  addiu       $a1, $a0, 0x134C
    ctx->pc = 0x2cf104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf108: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2cf108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf10c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2cf10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2cf110: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cf110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cf114: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2cf114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf118: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2cf118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2cf11c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x2cf11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2cf120: 0x30d20003  andi        $s2, $a2, 0x3
    ctx->pc = 0x2cf120u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2cf124: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf128: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf12c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2cf12cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf130: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2cf130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2cf134: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cf134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cf138: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cf138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf13c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2cf13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cf140: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2cf140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2cf144: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x2cf144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x2cf148: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CF148u;
    {
        const bool branch_taken_0x2cf148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf148) {
            ctx->pc = 0x2CF1D4u;
            return;
        }
    }
    ctx->pc = 0x2CF150u;
    // 0x2cf150: 0x16400053  bnez        $s2, . + 4 + (0x53 << 2)
    ctx->pc = 0x2CF150u;
    {
        const bool branch_taken_0x2cf150 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf150) {
            ctx->pc = 0x2CF2A0u;
            return;
        }
    }
    ctx->pc = 0x2CF158u;
    // 0x2cf158: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf15c: 0x2466134c  addiu       $a2, $v1, 0x134C
    ctx->pc = 0x2cf15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf160: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x2cf160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf164: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x2cf164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2cf168: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cf168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cf16c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2cf16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf170: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2cf170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cf174: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2cf174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cf178: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2cf178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2cf17c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2cf17cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2cf180: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf184: 0x2467134c  addiu       $a3, $v1, 0x134C
    ctx->pc = 0x2cf184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf188: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2cf188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf18c: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x2cf18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2cf190: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2cf190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2cf194: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2cf194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cf198: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2cf198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2cf19c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2cf19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cf1a0: 0x2881fffe  slti        $at, $a0, -0x2
    ctx->pc = 0x2cf1a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x2cf1a4: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2CF1A4u;
    {
        const bool branch_taken_0x2cf1a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1a4) {
            ctx->pc = 0x2CF2A0u;
            return;
        }
    }
    ctx->pc = 0x2CF1ACu;
    // 0x2cf1ac: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf1b0: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf1b4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf1b8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2cf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cf1bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2cf1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cf1c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cf1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf1c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf1c8: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2cf1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2cf1cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2CF1CCu;
    {
        const bool branch_taken_0x2cf1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1cc) {
            ctx->pc = 0x2CF2A0u;
            return;
        }
    }
    ctx->pc = 0x2CF1D4u;
}
