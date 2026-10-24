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

// Function: entry_002d0bf4
// Address: 0x2d0bf4 - 0x2d0f58
void entry_002d0bf4_0x2d0bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0bf4_0x2d0bf4");
#endif

    switch (ctx->pc) {
        case 0x2d0e50u: goto label_2d0e50;
        default: break;
    }

    ctx->pc = 0x2d0bf4u;

    // 0x2d0bf4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0bf8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0bfc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0c00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0c08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0c0c: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2d0c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0c10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0c14: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2d0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0c18: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2d0c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d0c1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0c24: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x2d0c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0c28: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x2d0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d0c2c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d0c30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0c34: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0c34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0c38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0c3c: 0x30441fff  andi        $a0, $v0, 0x1FFF
    ctx->pc = 0x2d0c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x2d0c40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0c44: 0x2443134c  addiu       $v1, $v0, 0x134C
    ctx->pc = 0x2d0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0c48: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0c4c: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x2d0c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0c50: 0x11a0c0  sll         $s4, $s1, 3
    ctx->pc = 0x2d0c50u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d0c54: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2d0c54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0c58: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2d0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2d0c5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2d0c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2d0c60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0c64: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0c68: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0c6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0c74: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2d0c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0c78: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x2d0c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2d0c7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0c80: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0c84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d0c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0c88: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d0c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d0c8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0c90: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0c94: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d0c98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d0c9c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0ca0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0ca4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0ca8: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x2d0ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2d0cac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0cb0: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0cb4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0cb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0cbc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0cc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0cc8: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x2d0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x2d0ccc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0cd0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0cd4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0cd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ce0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0ce4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0ce8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0cec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0cf0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0cf4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0cfc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0d00: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d0d04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0d08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0d0c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0d10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0d14: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x2d0d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d0d18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0d1c: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0d20: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0d24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0d28: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0d2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0d34: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2d0d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2d0d38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0d3c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0d40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0d44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0d4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0d50: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0d54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0d58: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0d5c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0d60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0d68: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0d6c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d0d70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0d74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0d78: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0d78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0d7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0d80: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x2d0d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0d84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0d88: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0d8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0d90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0d94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0d98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0d9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0da0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2d0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2d0da4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0da8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0dac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0db0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0dbc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d0dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0dc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0dc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0dcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0dd4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0dd8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d0ddc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0de0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0de4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0de8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0dec: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x2d0decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2d0df0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0df4: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0df8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0dfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0e00: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0e04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e0c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2d0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2d0e10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d0e14: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2d0e14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x2d0e18: 0x26428550  addiu       $v0, $s2, -0x7AB0
    ctx->pc = 0x2d0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935888));
    // 0x2d0e1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0e24: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2d0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d0e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e2c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d0e30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0e34: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2d0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d0e38: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2d0e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e3c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2d0e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2d0e40: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x2d0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x2d0e44: 0x3445010d  ori         $a1, $v0, 0x10D
    ctx->pc = 0x2d0e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x2d0e48: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2D0E48u;
    SET_GPR_U32(ctx, 31, 0x2D0E50u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2D0E48u, 0x2D0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E50u;
label_2d0e50:
    // 0x2d0e50: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x2d0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d0e54: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2d0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2d0e58: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2d0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d0e5c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2d0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x2d0e60: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x2d0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d0e64: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2d0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x2d0e68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0e6c: 0x2445134c  addiu       $a1, $v0, 0x134C
    ctx->pc = 0x2d0e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0e70: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2d0e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0e74: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2d0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d0e78: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0e7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d0e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e84: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0e88: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2d0e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2d0e8c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D0E8Cu;
    {
        const bool branch_taken_0x2d0e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e8c) {
            ctx->pc = 0x2D0F58u;
            return;
        }
    }
    ctx->pc = 0x2D0E94u;
    // 0x2d0e94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0e98: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0e9c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0ea0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0ea4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0ea8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0eac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0eb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d0eb4: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2d0eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0eb8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0ebc: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x2d0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ec0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2d0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d0ec4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2d0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2d0ec8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0ecc: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2d0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2d0ed0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ed4: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0ed8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0edc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0ee0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0ee4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0ee8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0eec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d0ef0: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2d0ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0ef4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0ef8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0efc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2d0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d0f00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0f04: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0f08: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2d0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2d0f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f10: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2d0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2d0f14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0f18: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0f1c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2d0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0f20: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d0f24: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0f28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f30: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0f34: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2d0f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0f38: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0f3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d0f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d0f44: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2d0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2d0f48: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f4c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2d0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2d0f50: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0F50u;
    {
        const bool branch_taken_0x2d0f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f50) {
            ctx->pc = 0x2D1000u;
            return;
        }
    }
    ctx->pc = 0x2D0F58u;
}
