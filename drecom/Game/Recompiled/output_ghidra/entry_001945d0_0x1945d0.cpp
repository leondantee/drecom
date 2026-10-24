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

// Function: entry_001945d0
// Address: 0x1945d0 - 0x194644
void entry_001945d0_0x1945d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001945d0_0x1945d0");
#endif

    ctx->pc = 0x1945d0u;

    // 0x1945d0: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1945d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1945d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1945d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1945d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1945d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1945dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1945dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1945e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1945e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1945e4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1945e8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1945ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1945f0: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1945f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1945f8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1945f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1945fc: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1945fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x194600: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x194600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194604: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194608: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x194608u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19460c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194610: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x194610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x194614: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x194614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x194618: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x194618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x19461c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194620: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x194620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x194624: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x194624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x194628: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x19462c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x19462cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194630: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194630u;
    {
        const bool branch_taken_0x194630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194630) {
            ctx->pc = 0x194644u;
            return;
        }
    }
    ctx->pc = 0x194638u;
    // 0x194638: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x194638u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19463c: 0x1000035b  b           . + 4 + (0x35B << 2)
    ctx->pc = 0x19463Cu;
    {
        const bool branch_taken_0x19463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19463c) {
            ctx->pc = 0x1953ACu;
            return;
        }
    }
    ctx->pc = 0x194644u;
}
