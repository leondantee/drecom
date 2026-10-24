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

// Function: entry_002f5924
// Address: 0x2f5924 - 0x2f59a0
void entry_002f5924_0x2f5924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5924_0x2f5924");
#endif

    switch (ctx->pc) {
        case 0x2f5954u: goto label_2f5954;
        default: break;
    }

    ctx->pc = 0x2f5924u;

    // 0x2f5924: 0x8e64012c  lw          $a0, 0x12C($s3)
    ctx->pc = 0x2f5924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x2f5928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f5928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f592c: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F592Cu;
    {
        const bool branch_taken_0x2f592c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f592c) {
            ctx->pc = 0x2F59A0u;
            return;
        }
    }
    ctx->pc = 0x2F5934u;
    // 0x2f5934: 0x8e03035c  lw          $v1, 0x35C($s0)
    ctx->pc = 0x2f5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x2f5938: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F5938u;
    {
        const bool branch_taken_0x2f5938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5938) {
            ctx->pc = 0x2F59A0u;
            return;
        }
    }
    ctx->pc = 0x2F5940u;
    // 0x2f5940: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x2f5940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2f5944: 0x266500b0  addiu       $a1, $s3, 0xB0
    ctx->pc = 0x2f5944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x2f5948: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x2f5948u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2f594c: 0xc0bd554  jal         func_2F5550
    ctx->pc = 0x2F594Cu;
    SET_GPR_U32(ctx, 31, 0x2F5954u);
    ctx->pc = 0x2F5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5550u, 0x2F594Cu, 0x2F5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5954u;
label_2f5954:
    // 0x2f5954: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5954u;
    {
        const bool branch_taken_0x2f5954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5954) {
            ctx->pc = 0x2F59A0u;
            return;
        }
    }
    ctx->pc = 0x2F595Cu;
    // 0x2f595c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5960: 0xae03035c  sw          $v1, 0x35C($s0)
    ctx->pc = 0x2f5960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 3));
    // 0x2f5964: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2f5964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f5968: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x2f5968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x2f596c: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
    // 0x2f5970: 0x260302f0  addiu       $v1, $s0, 0x2F0
    ctx->pc = 0x2f5970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f5974: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2f5974u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2f5978: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f5978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f597c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f597cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5980: 0x0  nop
    ctx->pc = 0x2f5980u;
    // NOP
    // 0x2f5984: 0xe60002fc  swc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f5984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f5988: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x2f5988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x2f598c: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2f598cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2f5990: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f5990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5998: 0x0  nop
    ctx->pc = 0x2f5998u;
    // NOP
    // 0x2f599c: 0xe600030c  swc1        $f0, 0x30C($s0)
    ctx->pc = 0x2f599cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
    ctx->pc = 0x2f59a0u;
}
