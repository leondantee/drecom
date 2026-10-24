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

// Function: entry_00193318
// Address: 0x193318 - 0x1933ac
void entry_00193318_0x193318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193318_0x193318");
#endif

    ctx->pc = 0x193318u;

    // 0x193318: 0x8ec20ac0  lw          $v0, 0xAC0($s6)
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2752)));
    // 0x19331c: 0x8ec20ac4  lw          $v0, 0xAC4($s6)
    ctx->pc = 0x19331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2756)));
    // 0x193320: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x193320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x193324: 0x92c20b1c  lbu         $v0, 0xB1C($s6)
    ctx->pc = 0x193324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2844)));
    // 0x193328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x193328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19332c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x193330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193334: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x193334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193338: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x193338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19333c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x193340: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x193340u;
    {
        const bool branch_taken_0x193340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193340) {
            ctx->pc = 0x1933ACu;
            return;
        }
    }
    ctx->pc = 0x193348u;
    // 0x193348: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19334c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x19334cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x193350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x193354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x193358: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x193358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x19335c: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x19335cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x193360: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x193360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x193364: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x193364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x193368: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x193368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19336c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x19336cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x193370: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193374: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x193374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193378: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19337c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x193380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x193384: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x193384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x193388: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x193388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19338c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19338cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x193390: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x193390u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x193394: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x193398: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x193398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19339c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19339cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1933a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1933a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1933a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1933A4u;
    {
        const bool branch_taken_0x1933a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1933a4) {
            ctx->pc = 0x1933E8u;
            return;
        }
    }
    ctx->pc = 0x1933ACu;
}
