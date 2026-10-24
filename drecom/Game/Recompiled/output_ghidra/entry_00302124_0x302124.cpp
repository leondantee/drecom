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

// Function: entry_00302124
// Address: 0x302124 - 0x3021a4
void entry_00302124_0x302124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302124_0x302124");
#endif

    switch (ctx->pc) {
        case 0x302164u: goto label_302164;
        default: break;
    }

    ctx->pc = 0x302124u;

    // 0x302124: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302128: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x302128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x30212c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x30212Cu;
    {
        const bool branch_taken_0x30212c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30212c) {
            ctx->pc = 0x3021D4u;
            return;
        }
    }
    ctx->pc = 0x302134u;
    // 0x302134: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x302134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x302138: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30213c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302144: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x302144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302148: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30214c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x302150: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x302150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302154: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302158: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30215c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30215Cu;
    SET_GPR_U32(ctx, 31, 0x302164u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30215Cu, 0x302164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302164u;
label_302164:
    // 0x302164: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x302164u;
    {
        const bool branch_taken_0x302164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302164) {
            ctx->pc = 0x3021A4u;
            return;
        }
    }
    ctx->pc = 0x30216Cu;
    // 0x30216c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302170: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302174: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302178: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x302178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30217c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302180: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302184: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302188: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30218c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302190: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302194: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302198: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30219c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30219Cu;
    {
        const bool branch_taken_0x30219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30219c) {
            ctx->pc = 0x3021D4u;
            return;
        }
    }
    ctx->pc = 0x3021A4u;
}
