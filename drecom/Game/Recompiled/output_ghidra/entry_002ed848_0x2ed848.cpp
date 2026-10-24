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

// Function: entry_002ed848
// Address: 0x2ed848 - 0x2ed898
void entry_002ed848_0x2ed848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed848_0x2ed848");
#endif

    ctx->pc = 0x2ed848u;

    // 0x2ed848: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ed848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed84c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2ed84cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed850: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2ed850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ed854: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2ed854u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2ed858: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2ed858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ed85c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2ED85Cu;
    {
        const bool branch_taken_0x2ed85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed85c) {
            ctx->pc = 0x2ED898u;
            return;
        }
    }
    ctx->pc = 0x2ED864u;
    // 0x2ed864: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ed868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ed868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ed86c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2ed86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2ed870: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ed870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ed874: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ed874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ed878: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ed878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ed87c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ed87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ed880: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2ed880u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ed884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed888: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ed888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ed88c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x2ed88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ed890: 0xc086488  jal         func_219220
    ctx->pc = 0x2ED890u;
    SET_GPR_U32(ctx, 31, 0x2ED898u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2ED890u, 0x2ED898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED898u;
}
