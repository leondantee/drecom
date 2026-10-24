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

// Function: entry_002d5aa8
// Address: 0x2d5aa8 - 0x2d5ba8
void entry_002d5aa8_0x2d5aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5aa8_0x2d5aa8");
#endif

    ctx->pc = 0x2d5aa8u;

    // 0x2d5aa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d5aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d5aac: 0x32310003  andi        $s1, $s1, 0x3
    ctx->pc = 0x2d5aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2d5ab0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5ab4: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x2d5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x2d5ab8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d5ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d5abc: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x2d5abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
    // 0x2d5ac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5ac4: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x2d5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x2d5ac8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x2d5ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x2d5acc: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x2d5accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
    // 0x2d5ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5ad4: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d5ad8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d5ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5adc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5ae0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x2d5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x2d5ae4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d5ae8: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x2d5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x2d5aec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5af0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x2d5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x2d5af4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x2d5af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x2d5af8: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x2d5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x2d5afc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5b00: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x2d5b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2d5b04: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x2d5b04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2d5b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d5b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d5b0c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2d5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2d5b10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5b14: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d5b18: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2d5b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2d5b1c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2d5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2d5b20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5b24: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x2d5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x2d5b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d5b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d5b2c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2d5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2d5b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5b34: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d5b38: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2d5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2d5b3c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d5b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5b44: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x2d5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x2d5b48: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D5B48u;
    {
        const bool branch_taken_0x2d5b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b48) {
            ctx->pc = 0x2D5BA8u;
            return;
        }
    }
    ctx->pc = 0x2D5B50u;
    // 0x2d5b50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d5b54: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d5b58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d5b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5b5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d5b68: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d5b6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d5b70: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d5b74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d5b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5b78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5b80: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d5b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d5b84: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d5b88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d5b8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d5b90: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d5b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d5b94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d5b98: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x2d5b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d5b9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5ba0: 0xc0b55ec  jal         func_2D57B0
    ctx->pc = 0x2D5BA0u;
    SET_GPR_U32(ctx, 31, 0x2D5BA8u);
    ctx->pc = 0x2D57B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D57B0u, 0x2D5BA0u, 0x2D5BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BA8u;
}
