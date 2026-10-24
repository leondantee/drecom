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

// Function: entry_0020a8c0
// Address: 0x20a8c0 - 0x20a9ac
void entry_0020a8c0_0x20a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a8c0_0x20a8c0");
#endif

    switch (ctx->pc) {
        case 0x20a98cu: goto label_20a98c;
        default: break;
    }

    ctx->pc = 0x20a8c0u;

    // 0x20a8c0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a8c4: 0x84461278  lh          $a2, 0x1278($v0)
    ctx->pc = 0x20a8c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20a8c8: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x20a8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20a8cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a8ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a8d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20a8d4: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x20A8D4u;
    {
        const bool branch_taken_0x20a8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a8d4) {
            ctx->pc = 0x20AAB8u;
            return;
        }
    }
    ctx->pc = 0x20A8DCu;
    // 0x20a8dc: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a8e0: 0x908209db  lbu         $v0, 0x9DB($a0)
    ctx->pc = 0x20a8e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x20a8e4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x20a8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20a8e8: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x20a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x20a8ec: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x20A8ECu;
    {
        const bool branch_taken_0x20a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a8ec) {
            ctx->pc = 0x20AAB8u;
            return;
        }
    }
    ctx->pc = 0x20A8F4u;
    // 0x20a8f4: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x20a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a8f8: 0x84c2127a  lh          $v0, 0x127A($a2)
    ctx->pc = 0x20a8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4730)));
    // 0x20a8fc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20A8FCu;
    {
        const bool branch_taken_0x20a8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a8fc) {
            ctx->pc = 0x20A9ACu;
            return;
        }
    }
    ctx->pc = 0x20A904u;
    // 0x20a904: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a908: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x20a908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x20a90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a910: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a914: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x20a914u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a918: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x20a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20a91c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a920: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a924: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x20a924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x20a928: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x20a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20a92c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a930: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a934: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x20a934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    // 0x20a938: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x20a938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20a93c: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a940: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x20a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a944: 0xac4400f8  sw          $a0, 0xF8($v0)
    ctx->pc = 0x20a944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 4));
    // 0x20a948: 0x24020506  addiu       $v0, $zero, 0x506
    ctx->pc = 0x20a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x20a94c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x20a94cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20a950: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a954: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x20a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x20a958: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20a95c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20a95cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a960: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x20a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x20a964: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20a964u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20a968: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20a96c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20a970: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20a974: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a978: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x20a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x20a97c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x20a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x20a980: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20a984: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20A984u;
    SET_GPR_U32(ctx, 31, 0x20A98Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20A98Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A98Cu) { return; }
    ctx->pc = 0x20A98Cu;
label_20a98c:
    // 0x20a98c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20a990: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20a994: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a998: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x20a998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x20a99c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x20a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x20a9a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20a9a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a9a4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20A9A4u;
    SET_GPR_U32(ctx, 31, 0x20A9ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20A9A4u, 0x20A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9ACu;
}
