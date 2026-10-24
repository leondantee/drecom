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

// Function: entry_00295d70
// Address: 0x295d70 - 0x295e2c
void entry_00295d70_0x295d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295d70_0x295d70");
#endif

    ctx->pc = 0x295d70u;

    // 0x295d70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295d74: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x295d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295d78: 0xae0369b0  sw          $v1, 0x69B0($s0)
    ctx->pc = 0x295d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27056), GPR_U32(ctx, 3));
    // 0x295d7c: 0x8e0369b0  lw          $v1, 0x69B0($s0)
    ctx->pc = 0x295d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27056)));
    // 0x295d80: 0xae0369b4  sw          $v1, 0x69B4($s0)
    ctx->pc = 0x295d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27060), GPR_U32(ctx, 3));
    // 0x295d84: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295d88: 0x2463ca10  addiu       $v1, $v1, -0x35F0
    ctx->pc = 0x295d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x295d8c: 0xae0369bc  sw          $v1, 0x69BC($s0)
    ctx->pc = 0x295d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27068), GPR_U32(ctx, 3));
    // 0x295d90: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x295d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x295d94: 0xae0369c0  sw          $v1, 0x69C0($s0)
    ctx->pc = 0x295d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27072), GPR_U32(ctx, 3));
    // 0x295d98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295d9c: 0xae03699c  sw          $v1, 0x699C($s0)
    ctx->pc = 0x295d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27036), GPR_U32(ctx, 3));
    // 0x295da0: 0xa20069c9  sb          $zero, 0x69C9($s0)
    ctx->pc = 0x295da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x295da4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x295da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x295da8: 0xa20369ca  sb          $v1, 0x69CA($s0)
    ctx->pc = 0x295da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27082), (uint8_t)GPR_U32(ctx, 3));
    // 0x295dac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295db0: 0xa20369cb  sb          $v1, 0x69CB($s0)
    ctx->pc = 0x295db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27083), (uint8_t)GPR_U32(ctx, 3));
    // 0x295db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295db8: 0xa20369cc  sb          $v1, 0x69CC($s0)
    ctx->pc = 0x295db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27084), (uint8_t)GPR_U32(ctx, 3));
    // 0x295dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295dc0: 0xa20369d0  sb          $v1, 0x69D0($s0)
    ctx->pc = 0x295dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27088), (uint8_t)GPR_U32(ctx, 3));
    // 0x295dc4: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295dc8: 0xae0369d4  sw          $v1, 0x69D4($s0)
    ctx->pc = 0x295dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27092), GPR_U32(ctx, 3));
    // 0x295dcc: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295dd0: 0xae0369d8  sw          $v1, 0x69D8($s0)
    ctx->pc = 0x295dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27096), GPR_U32(ctx, 3));
    // 0x295dd4: 0x920369ca  lbu         $v1, 0x69CA($s0)
    ctx->pc = 0x295dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27082)));
    // 0x295dd8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295ddc: 0x8e0369d4  lw          $v1, 0x69D4($s0)
    ctx->pc = 0x295ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x295de0: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295de4: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x295de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x295de8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x295de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295dec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295df0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x295df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x295df4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295df8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295df8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295dfc: 0xa60369a8  sh          $v1, 0x69A8($s0)
    ctx->pc = 0x295dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27048), (uint16_t)GPR_U32(ctx, 3));
    // 0x295e00: 0x920369cb  lbu         $v1, 0x69CB($s0)
    ctx->pc = 0x295e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27083)));
    // 0x295e04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295e08: 0x8e0369d8  lw          $v1, 0x69D8($s0)
    ctx->pc = 0x295e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x295e0c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295e10: 0x24030197  addiu       $v1, $zero, 0x197
    ctx->pc = 0x295e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x295e14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x295e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295e18: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295e1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295e1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295e20: 0xa60369aa  sh          $v1, 0x69AA($s0)
    ctx->pc = 0x295e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27050), (uint16_t)GPR_U32(ctx, 3));
    // 0x295e24: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x295E24u;
    {
        const bool branch_taken_0x295e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e24) {
            ctx->pc = 0x296024u;
            return;
        }
    }
    ctx->pc = 0x295E2Cu;
}
