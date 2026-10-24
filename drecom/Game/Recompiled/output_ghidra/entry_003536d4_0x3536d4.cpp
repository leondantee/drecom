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

// Function: entry_003536d4
// Address: 0x3536d4 - 0x3537a4
void entry_003536d4_0x3536d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003536d4_0x3536d4");
#endif

    ctx->pc = 0x3536d4u;

    // 0x3536d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3536d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3536d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3536d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3536dc: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x3536dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x3536e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3536e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3536e4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3536e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3536e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3536e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3536ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3536ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3536f0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3536f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3536f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3536f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3536f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3536f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3536fc: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x3536fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353704: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353708: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x353708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x35370c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35370cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353710: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x353710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x353714: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x353714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x353718: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x353718u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x35371c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35371cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353720: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353724: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x353724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353728: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35372c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x35372cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353734: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x353734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353738: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35373c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35373cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353740: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353744: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353748: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35374c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353750: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x353750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x353754: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353758: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x353758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35375c: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x35375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x353760: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x353760u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x353764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353768: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35376c: 0x90640070  lbu         $a0, 0x70($v1)
    ctx->pc = 0x35376cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353774: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353778: 0xa0640071  sb          $a0, 0x71($v1)
    ctx->pc = 0x353778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 4));
    // 0x35377c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x35377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353784: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353788: 0xa0640070  sb          $a0, 0x70($v1)
    ctx->pc = 0x353788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x35378c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x35378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353794: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353798: 0xa064006e  sb          $a0, 0x6E($v1)
    ctx->pc = 0x353798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x35379c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x35379Cu;
    {
        const bool branch_taken_0x35379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35379c) {
            ctx->pc = 0x353870u;
            return;
        }
    }
    ctx->pc = 0x3537A4u;
}
