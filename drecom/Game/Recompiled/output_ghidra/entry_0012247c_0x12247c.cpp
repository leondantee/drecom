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

// Function: entry_0012247c
// Address: 0x12247c - 0x122524
void entry_0012247c_0x12247c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012247c_0x12247c");
#endif

    switch (ctx->pc) {
        case 0x12248cu: goto label_12248c;
        case 0x1224b8u: goto label_1224b8;
        default: break;
    }

    ctx->pc = 0x12247cu;

    // 0x12247c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122480: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x122480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x122484: 0xc048090  jal         func_120240
    ctx->pc = 0x122484u;
    SET_GPR_U32(ctx, 31, 0x12248Cu);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x122484u, 0x12248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12248Cu;
label_12248c:
    // 0x12248c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12248cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x122490: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x122490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x122494: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x122494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x122498: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x122498u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12249c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1224a0: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x1224a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1224a4: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x1224a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
    // 0x1224a8: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x1224a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1224ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1224acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1224b0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1224B0u;
    SET_GPR_U32(ctx, 31, 0x1224B8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1224B0u, 0x1224B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224B8u;
label_1224b8:
    // 0x1224b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1224b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1224bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1224bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1224c0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1224c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1224c4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1224c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1224c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1224c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1224cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1224CCu;
    {
        const bool branch_taken_0x1224cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1224cc) {
            ctx->pc = 0x122524u;
            return;
        }
    }
    ctx->pc = 0x1224D4u;
    // 0x1224d4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1224d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1224d8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1224d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1224dc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1224dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1224e0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1224e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1224e4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1224e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1224e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1224e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1224ec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1224ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1224f0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1224f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1224f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1224f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1224f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1224f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1224fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1224fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x122500: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122504: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122508: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12250c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x12250cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122514: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122518: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x122518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x12251c: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x12251Cu;
    {
        const bool branch_taken_0x12251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12251c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122524u;
}
