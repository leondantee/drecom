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

// Function: entry_0016f9ec
// Address: 0x16f9ec - 0x16fb84
void entry_0016f9ec_0x16f9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f9ec_0x16f9ec");
#endif

    ctx->pc = 0x16f9ecu;

    // 0x16f9ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16f9f0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16f9f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16f9fc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fa00: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fa04: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fa08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa0c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x16fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x16fa10: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x16fa10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fa14: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fa18: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fa1c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fa20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa24: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x16fa24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x16fa28: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fa2c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fa30: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fa34: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x16fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa38: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x16fa38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16fa3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fa40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16fa40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16fa44: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16fa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16fa48: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x16fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x16fa4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fa50: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fa54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fa58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa5c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fa60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fa64: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fa68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa6c: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x16fa6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16fa70: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x16fa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x16fa74: 0x3bf7e  dsrl32      $s7, $v1, 29
    ctx->pc = 0x16fa74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) >> (32 + 29));
    // 0x16fa78: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fa7c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fa80: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fa84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa88: 0xac770018  sw          $s7, 0x18($v1)
    ctx->pc = 0x16fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 23));
    // 0x16fa8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fa90: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fa94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fa98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa9c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16faa0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16faa4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16faa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16faac: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16faacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16fab0: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x16fab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16fab4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fab8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fabc: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fac4: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x16fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x16fac8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16facc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16faccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fad0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fad4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fad8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fadc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fae0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fae8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16fae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16faec: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16faecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16faf0: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16faf4: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16faf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fafc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16fb00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fb04: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fb08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fb0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb10: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fb14: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fb18: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fb1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb20: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x16fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16fb24: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fb28: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fb2c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fb30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb34: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x16fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x16fb38: 0x12e00074  beqz        $s7, . + 4 + (0x74 << 2)
    ctx->pc = 0x16FB38u;
    {
        const bool branch_taken_0x16fb38 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb38) {
            ctx->pc = 0x16FD0Cu;
            return;
        }
    }
    ctx->pc = 0x16FB40u;
    // 0x16fb40: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fb44: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fb48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fb4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb50: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fb54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fb58: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fb5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb60: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x16fb60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x16fb64: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x16fb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x16fb68: 0x326be  dsrl32      $a0, $v1, 26
    ctx->pc = 0x16fb68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x16fb6c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x16fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16fb70: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FB70u;
    {
        const bool branch_taken_0x16fb70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16fb70) {
            ctx->pc = 0x16FB84u;
            return;
        }
    }
    ctx->pc = 0x16FB78u;
    // 0x16fb78: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x16fb78u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16fb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16FB7Cu;
    {
        const bool branch_taken_0x16fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb7c) {
            ctx->pc = 0x16FB88u;
            return;
        }
    }
    ctx->pc = 0x16FB84u;
}
