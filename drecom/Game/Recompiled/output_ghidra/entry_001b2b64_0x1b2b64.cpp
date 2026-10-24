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

// Function: entry_001b2b64
// Address: 0x1b2b64 - 0x1b2c24
void entry_001b2b64_0x1b2b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2b64_0x1b2b64");
#endif

    ctx->pc = 0x1b2b64u;

    // 0x1b2b64: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x1b2b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b2b68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2b70: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b2b74: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1b2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1b2b78: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1b2b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2b7c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2b80: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b2b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b2b84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2b8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2b94: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1b2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x1b2b98: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1b2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1b2b9c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1b2b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2ba0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1b2ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b2ba4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b2ba4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b2ba8: 0xa64211f2  sh          $v0, 0x11F2($s2)
    ctx->pc = 0x1b2ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2bac: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1b2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1b2bb0: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1b2bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b2bb4: 0xa24211ef  sb          $v0, 0x11EF($s2)
    ctx->pc = 0x1b2bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2bb8: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x1b2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1b2bbc: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1b2bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b2bc0: 0xa24211f0  sb          $v0, 0x11F0($s2)
    ctx->pc = 0x1b2bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2bc4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2bc8: 0x90460012  lbu         $a2, 0x12($v0)
    ctx->pc = 0x1b2bc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b2bcc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1b2bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b2bd0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b2bd4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1b2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1b2bd8: 0x24638540  addiu       $v1, $v1, -0x7AC0
    ctx->pc = 0x1b2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935872));
    // 0x1b2bdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2be0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1b2be0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2be4: 0xa64311f6  sh          $v1, 0x11F6($s2)
    ctx->pc = 0x1b2be4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b2be8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b2be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b2bec: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b2becu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b2bf0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b2bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b2bf4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B2BF4u;
    {
        const bool branch_taken_0x1b2bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2bf4) {
            ctx->pc = 0x1B2CE0u;
            return;
        }
    }
    ctx->pc = 0x1B2BFCu;
    // 0x1b2bfc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b2bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b2c00: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x1b2c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEF66u));
    // 0x1b2c04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b2c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2c0c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2C0Cu;
    {
        const bool branch_taken_0x1b2c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b2c0c) {
            ctx->pc = 0x1B2C34u;
            return;
        }
    }
    ctx->pc = 0x1B2C14u;
    // 0x1b2c14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2C14u;
    {
        const bool branch_taken_0x1b2c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c14) {
            ctx->pc = 0x1B2C24u;
            return;
        }
    }
    ctx->pc = 0x1B2C1Cu;
    // 0x1b2c1c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B2C1Cu;
    {
        const bool branch_taken_0x1b2c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c1c) {
            ctx->pc = 0x1B2CE0u;
            return;
        }
    }
    ctx->pc = 0x1B2C24u;
}
