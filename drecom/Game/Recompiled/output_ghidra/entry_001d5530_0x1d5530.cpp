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

// Function: entry_001d5530
// Address: 0x1d5530 - 0x1d55f8
void entry_001d5530_0x1d5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5530_0x1d5530");
#endif

    ctx->pc = 0x1d5530u;

    // 0x1d5530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5534: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5538: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d553c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d553cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5540: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5544: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1d5548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d554c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d554cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5550: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5554: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5558: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d555c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x1d555cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x1d5560: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5568: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d556c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5570: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5574: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5578: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x1d5578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x1d557c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d557cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5580: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5584: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5588: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d558c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5590: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x1d5590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x1d5594: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1d5594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d5598: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d5598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d559c: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1d559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d55a0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d55a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d55a4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d55a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d55ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d55acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d55b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d55b4: 0xfc4300a0  sd          $v1, 0xA0($v0)
    ctx->pc = 0x1d55b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 160), GPR_U64(ctx, 3));
    // 0x1d55b8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1d55b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d55bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d55bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d55c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d55c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d55c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d55c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d55c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d55cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d55d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d55d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d55d8: 0xfc4300a8  sd          $v1, 0xA8($v0)
    ctx->pc = 0x1d55d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 3));
    // 0x1d55dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d55dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d55e0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1d55e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d55e4: 0x1660ff74  bnez        $s3, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1D55E4u;
    {
        const bool branch_taken_0x1d55e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55e4) {
            ctx->pc = 0x1D53B8u;
            return;
        }
    }
    ctx->pc = 0x1D55ECu;
    // 0x1d55ec: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x1d55ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d55f0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d55f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d55f4: 0x0  nop
    ctx->pc = 0x1d55f4u;
    // NOP
    ctx->pc = 0x1d55f8u;
}
