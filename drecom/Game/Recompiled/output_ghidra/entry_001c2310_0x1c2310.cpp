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

// Function: entry_001c2310
// Address: 0x1c2310 - 0x1c23b0
void entry_001c2310_0x1c2310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2310_0x1c2310");
#endif

    switch (ctx->pc) {
        case 0x1c2330u: goto label_1c2330;
        case 0x1c233cu: goto label_1c233c;
        case 0x1c2350u: goto label_1c2350;
        case 0x1c235cu: goto label_1c235c;
        case 0x1c23a8u: goto label_1c23a8;
        default: break;
    }

    ctx->pc = 0x1c2310u;

    // 0x1c2310: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2314: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c2314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2318: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c231c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c2320: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2324: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2324u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2328: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2328u;
    SET_GPR_U32(ctx, 31, 0x1C2330u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2328u, 0x1C2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2330u;
label_1c2330:
    // 0x1c2330: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2334: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2334u;
    SET_GPR_U32(ctx, 31, 0x1C233Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2334u, 0x1C233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C233Cu;
label_1c233c:
    // 0x1c233c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c233cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2340: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2344: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2348: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C2348u;
    SET_GPR_U32(ctx, 31, 0x1C2350u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C2348u, 0x1C2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2350u;
label_1c2350:
    // 0x1c2350: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c2350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2354: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2354u;
    SET_GPR_U32(ctx, 31, 0x1C235Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2354u, 0x1C235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C235Cu;
label_1c235c:
    // 0x1c235c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2360: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1c2360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1c2364: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c2364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2368: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c2368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c236c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C236Cu;
    {
        const bool branch_taken_0x1c236c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c236c) {
            ctx->pc = 0x1C23B0u;
            return;
        }
    }
    ctx->pc = 0x1C2374u;
    // 0x1c2374: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c2374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2378: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c2378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c237c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C237Cu;
    {
        const bool branch_taken_0x1c237c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c237c) {
            ctx->pc = 0x1C23B0u;
            return;
        }
    }
    ctx->pc = 0x1C2384u;
    // 0x1c2384: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2388: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c238c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c2390: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2394: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2394u;
    {
        const bool branch_taken_0x1c2394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2394) {
            ctx->pc = 0x1C23B0u;
            return;
        }
    }
    ctx->pc = 0x1C239Cu;
    // 0x1c239c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23a0: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C23A0u;
    SET_GPR_U32(ctx, 31, 0x1C23A8u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C23A0u, 0x1C23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23A8u;
label_1c23a8:
    // 0x1c23a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C23A8u;
    {
        const bool branch_taken_0x1c23a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23a8) {
            ctx->pc = 0x1C2404u;
            return;
        }
    }
    ctx->pc = 0x1C23B0u;
}
