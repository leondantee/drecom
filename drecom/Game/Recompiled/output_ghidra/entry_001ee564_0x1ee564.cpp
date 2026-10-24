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

// Function: entry_001ee564
// Address: 0x1ee564 - 0x1ee620
void entry_001ee564_0x1ee564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee564_0x1ee564");
#endif

    switch (ctx->pc) {
        case 0x1ee57cu: goto label_1ee57c;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee5a4u: goto label_1ee5a4;
        case 0x1ee618u: goto label_1ee618;
        default: break;
    }

    ctx->pc = 0x1ee564u;

    // 0x1ee564: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee568: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1ee568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee56c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee570: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ee570u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee574: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EE574u;
    SET_GPR_U32(ctx, 31, 0x1EE57Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EE574u, 0x1EE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE57Cu;
label_1ee57c:
    // 0x1ee57c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee580: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1ee580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1ee584: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee588: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee58c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EE58Cu;
    SET_GPR_U32(ctx, 31, 0x1EE594u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EE58Cu, 0x1EE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE594u;
label_1ee594:
    // 0x1ee594: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ee594u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ee598: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee59c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EE59Cu;
    SET_GPR_U32(ctx, 31, 0x1EE5A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EE59Cu, 0x1EE5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE5A4u;
label_1ee5a4:
    // 0x1ee5a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ee5a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ee5a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5ac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ee5acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ee5b0: 0x1060017e  beqz        $v1, . + 4 + (0x17E << 2)
    ctx->pc = 0x1EE5B0u;
    {
        const bool branch_taken_0x1ee5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5b0) {
            ctx->pc = 0x1EEBACu;
            return;
        }
    }
    ctx->pc = 0x1EE5B8u;
    // 0x1ee5b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5bc: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1ee5bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1ee5c0: 0x1460017a  bnez        $v1, . + 4 + (0x17A << 2)
    ctx->pc = 0x1EE5C0u;
    {
        const bool branch_taken_0x1ee5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5c0) {
            ctx->pc = 0x1EEBACu;
            return;
        }
    }
    ctx->pc = 0x1EE5C8u;
    // 0x1ee5c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5cc: 0x8465127a  lh          $a1, 0x127A($v1)
    ctx->pc = 0x1ee5ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1ee5d0: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x1ee5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1ee5d4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ee5d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ee5d8: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EE5D8u;
    {
        const bool branch_taken_0x1ee5d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5d8) {
            ctx->pc = 0x1EE648u;
            return;
        }
    }
    ctx->pc = 0x1EE5E0u;
    // 0x1ee5e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5e4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ee5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee5e8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ee5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ee5ec: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee5f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE5F0u;
    {
        const bool branch_taken_0x1ee5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5f0) {
            ctx->pc = 0x1EE620u;
            return;
        }
    }
    ctx->pc = 0x1EE5F8u;
    // 0x1ee5f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee600: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee604: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x1ee604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x1ee608: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee60c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee610: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE610u;
    SET_GPR_U32(ctx, 31, 0x1EE618u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE610u, 0x1EE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE618u;
label_1ee618:
    // 0x1ee618: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1EE618u;
    {
        const bool branch_taken_0x1ee618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee618) {
            ctx->pc = 0x1EE6A8u;
            return;
        }
    }
    ctx->pc = 0x1EE620u;
}
