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

// Function: entry_001ca54c
// Address: 0x1ca54c - 0x1ca5c8
void entry_001ca54c_0x1ca54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca54c_0x1ca54c");
#endif

    switch (ctx->pc) {
        case 0x1ca5c4u: goto label_1ca5c4;
        default: break;
    }

    ctx->pc = 0x1ca54cu;

    // 0x1ca54c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca550: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ca550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ca554: 0x106000e4  beqz        $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1CA554u;
    {
        const bool branch_taken_0x1ca554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca554) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA55Cu;
    // 0x1ca55c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca560: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ca560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca564: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1ca564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1ca568: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ca568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ca56c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CA56Cu;
    {
        const bool branch_taken_0x1ca56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca56c) {
            ctx->pc = 0x1CA630u;
            return;
        }
    }
    ctx->pc = 0x1CA574u;
    // 0x1ca574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca578: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca57c: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1ca57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1ca580: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1ca580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca584: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ca584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca588: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca58c: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ca58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1ca590: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca594: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ca594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca598: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca59c: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1ca59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
    // 0x1ca5a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5a4: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1ca5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ca5a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5ac: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1ca5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ca5b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA5B0u;
    {
        const bool branch_taken_0x1ca5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca5b0) {
            ctx->pc = 0x1CA5C8u;
            return;
        }
    }
    ctx->pc = 0x1CA5B8u;
    // 0x1ca5b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5bc: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CA5BCu;
    SET_GPR_U32(ctx, 31, 0x1CA5C4u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CA5BCu, 0x1CA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5C4u;
label_1ca5c4:
    // 0x1ca5c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ca5c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ca5c8u;
}
