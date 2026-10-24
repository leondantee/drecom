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

// Function: entry_00135948
// Address: 0x135948 - 0x135a0c
void entry_00135948_0x135948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135948_0x135948");
#endif

    switch (ctx->pc) {
        case 0x135954u: goto label_135954;
        case 0x135984u: goto label_135984;
        case 0x135998u: goto label_135998;
        case 0x1359dcu: goto label_1359dc;
        case 0x135a04u: goto label_135a04;
        default: break;
    }

    ctx->pc = 0x135948u;

    // 0x135948: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x135948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13594c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x13594Cu;
    SET_GPR_U32(ctx, 31, 0x135954u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x13594Cu, 0x135954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135954u;
label_135954:
    // 0x135954: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x135954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x135958: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x135958u;
    {
        const bool branch_taken_0x135958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135958) {
            ctx->pc = 0x135A0Cu;
            return;
        }
    }
    ctx->pc = 0x135960u;
    // 0x135960: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135964: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x135964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135968: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13596c: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x13596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x135970: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x135970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x135974: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x135974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x135978: 0x24478da4  addiu       $a3, $v0, -0x725C
    ctx->pc = 0x135978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938020));
    // 0x13597c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x13597Cu;
    SET_GPR_U32(ctx, 31, 0x135984u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x13597Cu, 0x135984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135984u;
label_135984:
    // 0x135984: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x135984u;
    {
        const bool branch_taken_0x135984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135984) {
            ctx->pc = 0x135AB0u;
            return;
        }
    }
    ctx->pc = 0x13598Cu;
    // 0x13598c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x135990: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x135990u;
    SET_GPR_U32(ctx, 31, 0x135998u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x135990u, 0x135998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135998u;
label_135998:
    // 0x135998: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13599c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13599cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1359a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1359a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1359a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1359a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1359a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1359a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1359ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1359acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1359b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1359b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1359b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1359b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1359b8: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x1359b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x1359bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1359c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1359c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1359c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1359c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1359c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1359c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1359cc: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x1359ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1359d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1359d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1359d4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1359D4u;
    SET_GPR_U32(ctx, 31, 0x1359DCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1359D4u, 0x1359DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359DCu;
label_1359dc:
    // 0x1359dc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1359dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1359e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1359e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1359e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1359e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1359e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1359e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1359ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1359ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1359f0: 0x24040523  addiu       $a0, $zero, 0x523
    ctx->pc = 0x1359f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1315));
    // 0x1359f4: 0x244505b0  addiu       $a1, $v0, 0x5B0
    ctx->pc = 0x1359f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x1359f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1359f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1359fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1359FCu;
    SET_GPR_U32(ctx, 31, 0x135A04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1359FCu, 0x135A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A04u;
label_135a04:
    // 0x135a04: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x135A04u;
    {
        const bool branch_taken_0x135a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a04) {
            ctx->pc = 0x135AB0u;
            return;
        }
    }
    ctx->pc = 0x135A0Cu;
}
