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

// Function: entry_001495e4
// Address: 0x1495e4 - 0x14964c
void entry_001495e4_0x1495e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001495e4_0x1495e4");
#endif

    switch (ctx->pc) {
        case 0x1495f8u: goto label_1495f8;
        case 0x14960cu: goto label_14960c;
        case 0x149618u: goto label_149618;
        default: break;
    }

    ctx->pc = 0x1495e4u;

    // 0x1495e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1495e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1495e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1495ec: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1495ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1495f0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1495F0u;
    SET_GPR_U32(ctx, 31, 0x1495F8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1495F0u, 0x1495F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495F8u;
label_1495f8:
    // 0x1495f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1495f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1495fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1495fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149600: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x149600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x149604: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x149604u;
    SET_GPR_U32(ctx, 31, 0x14960Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x149604u, 0x14960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14960Cu;
label_14960c:
    // 0x14960c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14960cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149610: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x149610u;
    SET_GPR_U32(ctx, 31, 0x149618u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x149610u, 0x149618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149618u;
label_149618:
    // 0x149618: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14961c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14961cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x149620: 0x106000c3  beqz        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x149620u;
    {
        const bool branch_taken_0x149620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149620) {
            ctx->pc = 0x149930u;
            return;
        }
    }
    ctx->pc = 0x149628u;
    // 0x149628: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14962c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14962cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x149630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149634: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x149634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x149638: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x149638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14963c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149640: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x149640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x149644: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x149644u;
    {
        const bool branch_taken_0x149644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149644) {
            ctx->pc = 0x149930u;
            return;
        }
    }
    ctx->pc = 0x14964Cu;
}
