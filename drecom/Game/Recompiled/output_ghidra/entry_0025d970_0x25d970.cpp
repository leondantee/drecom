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

// Function: entry_0025d970
// Address: 0x25d970 - 0x25da00
void entry_0025d970_0x25d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d970_0x25d970");
#endif

    ctx->pc = 0x25d970u;

    // 0x25d970: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x25d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x25d974: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x25d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25d978: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25d978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d97c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x25d97cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d980: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x25d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25d984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d988: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x25d988u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d98c: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x25d98cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25d990: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25d990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25d994: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25d998: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25d998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25d99c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25d9a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25d9a4: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25d9a8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x25d9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d9ac: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x25d9acu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25d9b0: 0x960309e0  lhu         $v1, 0x9E0($s0)
    ctx->pc = 0x25d9b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25d9b4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x25d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25d9b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25d9bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25D9BCu;
    {
        const bool branch_taken_0x25d9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d9bc) {
            ctx->pc = 0x25DA00u;
            return;
        }
    }
    ctx->pc = 0x25D9C4u;
    // 0x25d9c4: 0x8e030354  lw          $v1, 0x354($s0)
    ctx->pc = 0x25d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25d9c8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25D9C8u;
    {
        const bool branch_taken_0x25d9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d9c8) {
            ctx->pc = 0x25DA00u;
            return;
        }
    }
    ctx->pc = 0x25D9D0u;
    // 0x25d9d0: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x25d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25d9d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25d9d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25d9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d9dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d9e0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25d9e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d9e4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25d9e8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25d9ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25d9f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25d9f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25d9f8: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25d9fc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x25d9fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x25da00u;
}
