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

// Function: entry_001230d4
// Address: 0x1230d4 - 0x123168
void entry_001230d4_0x1230d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001230d4_0x1230d4");
#endif

    switch (ctx->pc) {
        case 0x123110u: goto label_123110;
        case 0x12311cu: goto label_12311c;
        default: break;
    }

    ctx->pc = 0x1230d4u;

label_1230d4:
    // 0x1230d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1230d8:
    // 0x1230d8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1230d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1230dc:
    // 0x1230dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1230dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1230e0:
    // 0x1230e0: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x1230e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_1230e4:
    // 0x1230e4: 0x146000ba  bnez        $v1, . + 4 + (0xBA << 2)
label_1230e8:
    if (ctx->pc == 0x1230E8u) {
        ctx->pc = 0x1230ECu;
        goto label_1230ec;
    }
    ctx->pc = 0x1230E4u;
    {
        const bool branch_taken_0x1230e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1230e4) {
            ctx->pc = 0x1233D0u;
            return;
        }
    }
    ctx->pc = 0x1230ECu;
label_1230ec:
    // 0x1230ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1230ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1230f0:
    // 0x1230f0: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1230f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1230f4:
    // 0x1230f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1230f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1230f8:
    // 0x1230f8: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x1230f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
label_1230fc:
    // 0x1230fc: 0x102000b4  beqz        $at, . + 4 + (0xB4 << 2)
label_123100:
    if (ctx->pc == 0x123100u) {
        ctx->pc = 0x123104u;
        goto label_123104;
    }
    ctx->pc = 0x1230FCu;
    {
        const bool branch_taken_0x1230fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1230fc) {
            ctx->pc = 0x1233D0u;
            return;
        }
    }
    ctx->pc = 0x123104u;
label_123104:
    // 0x123104: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x123104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_123108:
    // 0x123108: 0xc0675a4  jal         func_19D690
label_12310c:
    if (ctx->pc == 0x12310Cu) {
        ctx->pc = 0x123110u;
        goto label_123110;
    }
    ctx->pc = 0x123108u;
    SET_GPR_U32(ctx, 31, 0x123110u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x123108u, 0x123110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123110u;
label_123110:
    // 0x123110: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_123114:
    // 0x123114: 0xc0675a4  jal         func_19D690
label_123118:
    if (ctx->pc == 0x123118u) {
        ctx->pc = 0x12311Cu;
        goto label_12311c;
    }
    ctx->pc = 0x123114u;
    SET_GPR_U32(ctx, 31, 0x12311Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x123114u, 0x12311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12311Cu;
label_12311c:
    // 0x12311c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x12311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123120:
    // 0x123120: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x123120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_123124:
    // 0x123124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123128:
    // 0x123128: 0x0  nop
    ctx->pc = 0x123128u;
    // NOP
label_12312c:
    // 0x12312c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12312cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_123130:
    // 0x123130: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x123130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_123134:
    // 0x123134: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_123138:
    // 0x123138: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x123138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_12313c:
    // 0x12313c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x12313cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_123140:
    // 0x123140: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x123140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_123144:
    // 0x123144: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_123148:
    if (ctx->pc == 0x123148u) {
        ctx->pc = 0x12314Cu;
        goto label_12314c;
    }
    ctx->pc = 0x123144u;
    {
        const bool branch_taken_0x123144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x123144) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x12314Cu;
label_12314c:
    // 0x12314c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x12314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_123150:
    // 0x123150: 0x2443e170  addiu       $v1, $v0, -0x1E90
    ctx->pc = 0x123150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959472));
label_123154:
    // 0x123154: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x123154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_123158:
    // 0x123158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12315c:
    // 0x12315c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123160:
    // 0x123160: 0x400008  jr          $v0
label_123164:
    if (ctx->pc == 0x123164u) {
        ctx->pc = 0x123168u;
        goto label_fallthrough_0x123160;
    }
    ctx->pc = 0x123160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x123160:
    ctx->pc = 0x123168u;
}
