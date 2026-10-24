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

// Function: entry_0032e1e4
// Address: 0x32e1e4 - 0x32e37c
void entry_0032e1e4_0x32e1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e1e4_0x32e1e4");
#endif

    switch (ctx->pc) {
        case 0x32e238u: goto label_32e238;
        case 0x32e274u: goto label_32e274;
        case 0x32e2b0u: goto label_32e2b0;
        case 0x32e2ecu: goto label_32e2ec;
        case 0x32e334u: goto label_32e334;
        case 0x32e358u: goto label_32e358;
        default: break;
    }

    ctx->pc = 0x32e1e4u;

    // 0x32e1e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e1e8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32e1ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32e1f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32e1f4: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x32E1F4u;
    {
        const bool branch_taken_0x32e1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e1f4) {
            ctx->pc = 0x32E37Cu;
            return;
        }
    }
    ctx->pc = 0x32E1FCu;
    // 0x32e1fc: 0x862213a8  lh          $v0, 0x13A8($s1)
    ctx->pc = 0x32e1fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5032)));
    // 0x32e200: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e204: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e204u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e208: 0x862213aa  lh          $v0, 0x13AA($s1)
    ctx->pc = 0x32e208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5034)));
    // 0x32e20c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e20cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e210: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e210u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e214: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e218: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e21c: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e220: 0x34420714  ori         $v0, $v0, 0x714
    ctx->pc = 0x32e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1812);
    // 0x32e224: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e228: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e22c: 0x24451f70  addiu       $a1, $v0, 0x1F70
    ctx->pc = 0x32e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8048));
    // 0x32e230: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E230u;
    SET_GPR_U32(ctx, 31, 0x32E238u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E230u, 0x32E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E238u;
label_32e238:
    // 0x32e238: 0x862213ac  lh          $v0, 0x13AC($s1)
    ctx->pc = 0x32e238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5036)));
    // 0x32e23c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e240: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e240u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e244: 0x862213ae  lh          $v0, 0x13AE($s1)
    ctx->pc = 0x32e244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5038)));
    // 0x32e248: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e24c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e24cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e250: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e254: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e258: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e25c: 0x34420715  ori         $v0, $v0, 0x715
    ctx->pc = 0x32e25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1813);
    // 0x32e260: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e264: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e268: 0x24451f90  addiu       $a1, $v0, 0x1F90
    ctx->pc = 0x32e268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8080));
    // 0x32e26c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E26Cu;
    SET_GPR_U32(ctx, 31, 0x32E274u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E26Cu, 0x32E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E274u;
label_32e274:
    // 0x32e274: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e278: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32e278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32e27c: 0x30468000  andi        $a2, $v0, 0x8000
    ctx->pc = 0x32e27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32e280: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e284: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32e284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32e288: 0x30472000  andi        $a3, $v0, 0x2000
    ctx->pc = 0x32e288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x32e28c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e290: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e294: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e298: 0x34420716  ori         $v0, $v0, 0x716
    ctx->pc = 0x32e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1814);
    // 0x32e29c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e2a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e2a4: 0x24451fb0  addiu       $a1, $v0, 0x1FB0
    ctx->pc = 0x32e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8112));
    // 0x32e2a8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E2A8u;
    SET_GPR_U32(ctx, 31, 0x32E2B0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E2A8u, 0x32E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2B0u;
label_32e2b0:
    // 0x32e2b0: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x32e2b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x32e2b4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e2b8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e2b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e2bc: 0x8622138c  lh          $v0, 0x138C($s1)
    ctx->pc = 0x32e2bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5004)));
    // 0x32e2c0: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e2c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e2c4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e2c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e2c8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e2cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e2d0: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e2d4: 0x34420710  ori         $v0, $v0, 0x710
    ctx->pc = 0x32e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1808);
    // 0x32e2d8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e2dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e2e0: 0x24451ff0  addiu       $a1, $v0, 0x1FF0
    ctx->pc = 0x32e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8176));
    // 0x32e2e4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E2E4u;
    SET_GPR_U32(ctx, 31, 0x32E2ECu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E2E4u, 0x32E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2ECu;
label_32e2ec:
    // 0x32e2ec: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x32e2ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x32e2f0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e2f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e2f4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e2f4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e2f8: 0x8622138c  lh          $v0, 0x138C($s1)
    ctx->pc = 0x32e2f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5004)));
    // 0x32e2fc: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e2fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e300: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e300u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e304: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x32e304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x32e308: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x32e308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e30c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x32e30cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x32e310: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e314: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e318: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e31c: 0x34420714  ori         $v0, $v0, 0x714
    ctx->pc = 0x32e31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1812);
    // 0x32e320: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e324: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e328: 0x24452010  addiu       $a1, $v0, 0x2010
    ctx->pc = 0x32e328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8208));
    // 0x32e32c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E32Cu;
    SET_GPR_U32(ctx, 31, 0x32E334u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E32Cu, 0x32E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E334u;
label_32e334:
    // 0x32e334: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e338: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e33c: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e340: 0x34420219  ori         $v0, $v0, 0x219
    ctx->pc = 0x32e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)537);
    // 0x32e344: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e348: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e34c: 0x24452030  addiu       $a1, $v0, 0x2030
    ctx->pc = 0x32e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x32e350: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E350u;
    SET_GPR_U32(ctx, 31, 0x32E358u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E350u, 0x32E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E358u;
label_32e358:
    // 0x32e358: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e35c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e360: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e364: 0x3442021a  ori         $v0, $v0, 0x21A
    ctx->pc = 0x32e364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)538);
    // 0x32e368: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e36c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e370: 0x24452040  addiu       $a1, $v0, 0x2040
    ctx->pc = 0x32e370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8256));
    // 0x32e374: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E374u;
    SET_GPR_U32(ctx, 31, 0x32E37Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E374u, 0x32E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E37Cu;
}
