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

// Function: entry_001d0910
// Address: 0x1d0910 - 0x1d0988
void entry_001d0910_0x1d0910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0910_0x1d0910");
#endif

    ctx->pc = 0x1d0910u;

    // 0x1d0910: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0914: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1d0914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1d0918: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D0918u;
    {
        const bool branch_taken_0x1d0918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0918) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D0920u;
    // 0x1d0920: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0924: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d0924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d0928: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1d0928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1d092c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1d092cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d0930: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D0930u;
    {
        const bool branch_taken_0x1d0930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0930) {
            ctx->pc = 0x1D09F0u;
            return;
        }
    }
    ctx->pc = 0x1D0938u;
    // 0x1d0938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d093c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1d093cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0940: 0xe4c01564  swc1        $f0, 0x1564($a2)
    ctx->pc = 0x1d0940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 5476), bits); }
    // 0x1d0944: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1d0944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0948: 0xc4e000d4  lwc1        $f0, 0xD4($a3)
    ctx->pc = 0x1d0948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d094c: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1d094cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0950: 0xe5001568  swc1        $f0, 0x1568($t0)
    ctx->pc = 0x1d0950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 5480), bits); }
    // 0x1d0954: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0958: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1d0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d095c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0960: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1d0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1d0964: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0968: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1d0968u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d096c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0970: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1d0970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1d0974: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0974u;
    {
        const bool branch_taken_0x1d0974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0974) {
            ctx->pc = 0x1D0988u;
            return;
        }
    }
    ctx->pc = 0x1D097Cu;
    // 0x1d097c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d097cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0980: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1D0980u;
    SET_GPR_U32(ctx, 31, 0x1D0988u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1D0980u, 0x1D0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0988u;
}
