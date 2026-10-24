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

// Function: entry_0028b4dc
// Address: 0x28b4dc - 0x28b610
void entry_0028b4dc_0x28b4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b4dc_0x28b4dc");
#endif

    ctx->pc = 0x28b4dcu;

    // 0x28b4dc: 0x82465de9  lb          $a2, 0x5DE9($s2)
    ctx->pc = 0x28b4dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24041)));
    // 0x28b4e0: 0x6463c  dsll32      $t0, $a2, 24
    ctx->pc = 0x28b4e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28b4e4: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x28b4e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x28b4e8: 0x15000128  bnez        $t0, . + 4 + (0x128 << 2)
    ctx->pc = 0x28B4E8u;
    {
        const bool branch_taken_0x28b4e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b4e8) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B4F0u;
    // 0x28b4f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b4f4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x28b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28b4f8: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x28b4f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28b4fc: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x28b4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x28b500: 0xe83021  addu        $a2, $a3, $t0
    ctx->pc = 0x28b500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x28b504: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x28b504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b508: 0x69a00  sll         $s3, $a2, 8
    ctx->pc = 0x28b508u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x28b50c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b510: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x28b510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28b514: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x28b514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x28b518: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x28b518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28b51c: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x28b51cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28b520: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x28b520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x28b524: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x28b524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x28b528: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x28b528u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28b52c: 0x7ea821  addu        $s5, $v1, $fp
    ctx->pc = 0x28b52cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x28b530: 0x32a6ff00  andi        $a2, $s5, 0xFF00
    ctx->pc = 0x28b530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
    // 0x28b534: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x28b534u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x28b538: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x28b538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28b53c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b540: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x28b540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28b544: 0x30d600ff  andi        $s6, $a2, 0xFF
    ctx->pc = 0x28b544u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b548: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x28b548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x28b54c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28b54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b550: 0x1468010e  bne         $v1, $t0, . + 4 + (0x10E << 2)
    ctx->pc = 0x28B550u;
    {
        const bool branch_taken_0x28b550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x28b550) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B558u;
    // 0x28b558: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b55c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x28b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28b560: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x28b560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28b564: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x28b564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28b568: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x28b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x28b56c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x28b56cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28b570: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x28b570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28b574: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b578: 0x3b200  sll         $s6, $v1, 8
    ctx->pc = 0x28b578u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28b57c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b580: 0x8c277508  lw          $a3, 0x7508($at)
    ctx->pc = 0x28b580u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x387508u));
    // 0x28b584: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x28b584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x28b588: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x28b588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28b58c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x28b58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28b590: 0x30d5ff00  andi        $s5, $a2, 0xFF00
    ctx->pc = 0x28b590u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x28b594: 0x153202  srl         $a2, $s5, 8
    ctx->pc = 0x28b594u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
    // 0x28b598: 0x2c62021  addu        $a0, $s6, $a2
    ctx->pc = 0x28b598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x28b59c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b5a0: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x28b5a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28b5a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x28b5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28b5a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b5ac: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x28b5acu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28b5b0: 0x0  nop
    ctx->pc = 0x28b5b0u;
    // NOP
    // 0x28b5b4: 0x0  nop
    ctx->pc = 0x28b5b4u;
    // NOP
    // 0x28b5b8: 0x2010  mfhi        $a0
    ctx->pc = 0x28b5b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x28b5bc: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x28b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x28b5c0: 0x8e465dc0  lw          $a2, 0x5DC0($s2)
    ctx->pc = 0x28b5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x28b5c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b5c8: 0x10c30040  beq         $a2, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x28B5C8u;
    {
        const bool branch_taken_0x28b5c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b5c8) {
            ctx->pc = 0x28B6CCu;
            return;
        }
    }
    ctx->pc = 0x28B5D0u;
    // 0x28b5d0: 0x82475dea  lb          $a3, 0x5DEA($s2)
    ctx->pc = 0x28b5d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28b5d4: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x28b5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x28b5d8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b5d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b5dc: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x28B5DCu;
    {
        const bool branch_taken_0x28b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b5dc) {
            ctx->pc = 0x28B6CCu;
            return;
        }
    }
    ctx->pc = 0x28B5E4u;
    // 0x28b5e4: 0x8fa7014c  lw          $a3, 0x14C($sp)
    ctx->pc = 0x28b5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x28b5e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b5ec: 0x10e60027  beq         $a3, $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x28B5ECu;
    {
        const bool branch_taken_0x28b5ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x28b5ec) {
            ctx->pc = 0x28B68Cu;
            return;
        }
    }
    ctx->pc = 0x28B5F4u;
    // 0x28b5f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b5f8: 0x10e30014  beq         $a3, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28B5F8u;
    {
        const bool branch_taken_0x28b5f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b5f8) {
            ctx->pc = 0x28B64Cu;
            return;
        }
    }
    ctx->pc = 0x28B600u;
    // 0x28b600: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B600u;
    {
        const bool branch_taken_0x28b600 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b600) {
            ctx->pc = 0x28B610u;
            return;
        }
    }
    ctx->pc = 0x28B608u;
    // 0x28b608: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x28B608u;
    {
        const bool branch_taken_0x28b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b608) {
            ctx->pc = 0x28B7B4u;
            return;
        }
    }
    ctx->pc = 0x28B610u;
}
