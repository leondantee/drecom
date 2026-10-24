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

// Function: entry_00373078
// Address: 0x373078 - 0x373120
void entry_00373078_0x373078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373078_0x373078");
#endif

    ctx->pc = 0x373078u;

    // 0x373078: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37307c: 0x8c660350  lw          $a2, 0x350($v1)
    ctx->pc = 0x37307cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x373080: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x373080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x373084: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x373084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373088: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x373088u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37308c: 0x3283003f  andi        $v1, $s4, 0x3F
    ctx->pc = 0x37308cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x373090: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x373090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x373094: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x373094u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x373098: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x373098u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x37309c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x37309cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3730a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3730a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3730a4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3730a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3730a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3730a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3730ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3730acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3730b0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3730b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3730b4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3730b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3730b8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3730b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3730bc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x3730bcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3730c0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3730c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3730c4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x3730c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x3730c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3730c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3730cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3730ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3730d0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3730D0u;
    {
        const bool branch_taken_0x3730d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3730d0) {
            ctx->pc = 0x373120u;
            return;
        }
    }
    ctx->pc = 0x3730D8u;
    // 0x3730d8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3730d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3730dc: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x3730dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x3730e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3730E0u;
    {
        const bool branch_taken_0x3730e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3730e0) {
            ctx->pc = 0x373120u;
            return;
        }
    }
    ctx->pc = 0x3730E8u;
    // 0x3730e8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3730e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3730ec: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x3730ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x3730f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3730f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3730f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3730f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3730f8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3730f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3730fc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x3730fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373100: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x373100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373104: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x373104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x373108: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x373108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x37310c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x37310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373110: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x373110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x373114: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x373114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x373118: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x373118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37311c: 0x0  nop
    ctx->pc = 0x37311cu;
    // NOP
    ctx->pc = 0x373120u;
}
