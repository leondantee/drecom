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

// Function: entry_00170a88
// Address: 0x170a88 - 0x170b20
void entry_00170a88_0x170a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a88_0x170a88");
#endif

    ctx->pc = 0x170a88u;

    // 0x170a88: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170a8c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x170a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x170a90: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x170a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170a94: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x170a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x170a98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170a9c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170aa0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x170aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170aa4: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x170aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x170aa8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170aac: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x170aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170ab0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170ab4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170ab8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170ac0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x170ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170ac4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170ac8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170ad0: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x170ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170ad4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x170ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x170ad8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170adc: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x170adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x170ae0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x170ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x170ae4: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x170ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x170ae8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170AE8u;
    {
        const bool branch_taken_0x170ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ae8) {
            ctx->pc = 0x170B20u;
            return;
        }
    }
    ctx->pc = 0x170AF0u;
    // 0x170af0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170af4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170afc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x170afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170b00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170b04: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170b08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x170b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170b0c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x170b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x170b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x170b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x170b14: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x170B14u;
    {
        const bool branch_taken_0x170b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b14) {
            ctx->pc = 0x170C40u;
            return;
        }
    }
    ctx->pc = 0x170B1Cu;
    // 0x170b1c: 0x0  nop
    ctx->pc = 0x170b1cu;
    // NOP
    ctx->pc = 0x170b20u;
}
