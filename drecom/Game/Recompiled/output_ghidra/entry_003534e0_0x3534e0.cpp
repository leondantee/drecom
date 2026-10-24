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

// Function: entry_003534e0
// Address: 0x3534e0 - 0x3535c4
void entry_003534e0_0x3534e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003534e0_0x3534e0");
#endif

    ctx->pc = 0x3534e0u;

    // 0x3534e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3534e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3534e8: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x3534e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x3534ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3534ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3534f0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3534f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3534f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3534f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3534fc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3534fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353504: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353508: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x35350c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353510: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353514: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x353514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x353518: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35351c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35351cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x353520: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x353520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x353524: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x353524u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x353528: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35352c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353530: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x353530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353534: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353538: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x353538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35353c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35353cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353540: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x353540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353544: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35354c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353550: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353554: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353558: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35355c: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x35355cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x353560: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353564: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x353564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x353568: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x353568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x35356c: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x35356cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x353570: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353574: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353578: 0x80630072  lb          $v1, 0x72($v1)
    ctx->pc = 0x353578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x35357c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x35357cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353580: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353584: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x353584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353588: 0x90830073  lbu         $v1, 0x73($a0)
    ctx->pc = 0x353588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 115)));
    // 0x35358c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x35358cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x353590: 0xa0830073  sb          $v1, 0x73($a0)
    ctx->pc = 0x353590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x353594: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353598: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35359c: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x35359cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x3535a0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3535a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3535a4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3535a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3535a8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3535a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3535ac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3535acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3535b0: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3535B0u;
    {
        const bool branch_taken_0x3535b0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3535b0) {
            ctx->pc = 0x3535C4u;
            return;
        }
    }
    ctx->pc = 0x3535B8u;
    // 0x3535b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3535b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3535bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3535c0: 0xa0600073  sb          $zero, 0x73($v1)
    ctx->pc = 0x3535c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3535c4u;
}
