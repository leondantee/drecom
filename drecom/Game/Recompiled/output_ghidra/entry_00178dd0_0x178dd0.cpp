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

// Function: entry_00178dd0
// Address: 0x178dd0 - 0x178f00
void entry_00178dd0_0x178dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178dd0_0x178dd0");
#endif

    ctx->pc = 0x178dd0u;

    // 0x178dd0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x178dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178dd4: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x178dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x178dd8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x178dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x178ddc: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178de0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178de4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178dec: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178df0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178df4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178dfc: 0xa4650012  sh          $a1, 0x12($v1)
    ctx->pc = 0x178dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x178e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178e04: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178e08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178e0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e14: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178e18: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178e1c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178e20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e24: 0xa4650010  sh          $a1, 0x10($v1)
    ctx->pc = 0x178e24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x178e28: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178e2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178e30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e38: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178e3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178e40: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e48: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x178e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x178e4c: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x178e4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x178e50: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178e54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178e58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e60: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178e64: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178e68: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e70: 0xa4650004  sh          $a1, 0x4($v1)
    ctx->pc = 0x178e70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x178e74: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x178e74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x178e78: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178e7c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178e80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178e84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e88: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178e8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178e90: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178e94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e98: 0xa4650006  sh          $a1, 0x6($v1)
    ctx->pc = 0x178e98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x178e9c: 0xde050018  ld          $a1, 0x18($s0)
    ctx->pc = 0x178e9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x178ea0: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178ea4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178ea8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178eac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178eb0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178eb4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178eb8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178ebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178ec0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x178ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x178ec4: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x178ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x178ec8: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x178ec8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178ecc: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178ed0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178ed4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178ed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178edc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178ee0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178ee4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178ee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178eec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x178ef0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x178ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x178ef4: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178ef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x178ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x178efc: 0xa3a30060  sb          $v1, 0x60($sp)
    ctx->pc = 0x178efcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x178f00u;
}
