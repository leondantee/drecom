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

// Function: entry_0018f958
// Address: 0x18f958 - 0x18f9bc
void entry_0018f958_0x18f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f958_0x18f958");
#endif

    ctx->pc = 0x18f958u;

    // 0x18f958: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18f958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18f95c: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x18f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x18f960: 0x2029023  subu        $s2, $s0, $v0
    ctx->pc = 0x18f960u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18f964: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18f968: 0x121082  srl         $v0, $s2, 2
    ctx->pc = 0x18f968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x18f96c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18f970: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18f974: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x18f974u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x18f978: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x18f978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f97c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f980: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x18f980u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x18f984: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x18f984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x18f988: 0x61480  sll         $v0, $a2, 18
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 18));
    // 0x18f98c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x18f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x18f990: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x18f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x18f994: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f998: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x18f998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x18f99c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x18f99cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x18f9a0: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x18f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x18f9a4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x18f9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18f9a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F9A8u;
    {
        const bool branch_taken_0x18f9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f9a8) {
            ctx->pc = 0x18F9BCu;
            return;
        }
    }
    ctx->pc = 0x18F9B0u;
    // 0x18f9b0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f9b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f9b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18F9B4u;
    {
        const bool branch_taken_0x18f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9b4) {
            ctx->pc = 0x18FA60u;
            return;
        }
    }
    ctx->pc = 0x18F9BCu;
}
